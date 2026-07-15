#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_2A2B2DC1DA1205FE;
class Class_1_BCD7402D15D7184C;
class Class_1_D50913C0AC7A262A;
class Class_1_F3391C70DC37088D;
class Class_2_6C1010345A89A766;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B343FAFD80A8B29B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F76300)
#define CLASS_1_B343FAFD80A8B29B_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x15F93780)
#define CLASS_1_B343FAFD80A8B29B_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x15F937A0)
#define CLASS_1_B343FAFD80A8B29B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15F93700)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0x15F937E0)
#define CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0x15F937C0)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15F93740)
#define CLASS_1_B343FAFD80A8B29B_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0x15F93720)
#define CLASS_1_B343FAFD80A8B29B_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0x15F93760)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x15F91E10)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_02BE02AD3B7ABEC5_OFFSET UNITYSDK_OFFSET(0x15F78910)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0x15F93820)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0x15F92710)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x15F76F50)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x15F90BB0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15F90B50)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x15F91D90)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x15F91B60)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15F77ED0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x15F91840)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_38E8C87591F8D4AA_OFFSET UNITYSDK_OFFSET(0x15F79CF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_3BB27E09543D8ACB_OFFSET UNITYSDK_OFFSET(0x15F90D20)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_40104F54A27D0FFA_OFFSET UNITYSDK_OFFSET(0x15F91570)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F90990)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0x15F90A80)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0x15F7A880)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0x15F91990)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0x15F92100)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_51FF09EBE6593DAC_OFFSET UNITYSDK_OFFSET(0x15F910A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x15F8FDF0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0x15F918F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0x15F77AB0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x15F936B0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x15F902F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_795059A0162B7B8D_OFFSET UNITYSDK_OFFSET(0x15F92260)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7AB2C887EB34984A_OFFSET UNITYSDK_OFFSET(0x15F92060)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15F92470)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0x15F90390)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x15F93120)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x15F906F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_8C0D3F14EE7D5F69_OFFSET UNITYSDK_OFFSET(0x15F93340)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0x15F908B0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15F92690)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0x15F93810)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x15F8F6C0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0x15F91C50)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0x15F909E0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15F935F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0x15F7A210)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET UNITYSDK_OFFSET(0x15F919F0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15F93800)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0x15F90C10)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F79820)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x15F799A0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0x15F929D0)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x15F90C90)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0x15F79B20)
#define CLASS_1_B343FAFD80A8B29B_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15F91FD0)
#define CLASS_1_B343FAFD80A8B29B_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x15F93790)
#define CLASS_1_B343FAFD80A8B29B_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x15F937B0)
#define CLASS_1_B343FAFD80A8B29B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15F93710)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0x15F937F0)
#define CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0x15F937D0)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15F93750)
#define CLASS_1_B343FAFD80A8B29B_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0x15F93730)
#define CLASS_1_B343FAFD80A8B29B_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0x15F93770)
#define CLASS_1_B343FAFD80A8B29B_TICK_OFFSET UNITYSDK_OFFSET(0x15F76810)
#define CLASS_1_B343FAFD80A8B29B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F93870)
#define CLASS_1_B343FAFD80A8B29B__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7A260)

inline static constexpr unsigned int Class_1_B343FAFD80A8B29B_TypeDefinitionIndex = 66321;

class Class_1_B343FAFD80A8B29B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0xA2D0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B343FAFD80A8B29B_TypeDefinitionIndex)->GetStaticField(0x4340);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::Il2CppArray<::Class_1_2A2B2DC1DA1205FE*>* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::RPG::GameCore::PhotoGraphOverrideModeConfig* Field_1_6; // 0x20
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x28
	::RPG::Client::PhotoGraphResultConditionPack* Field_1_8; // 0x30
	::RPG::GameCore::ShowMainPageHint* Field_1_9; // 0x38
	::Class_1_F3391C70DC37088D* Field_1_10; // 0x40
	::Class_1_BCD7402D15D7184C* Field_1_11; // 0x48
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x50
	::Il2CppArray<::System::String*>* Field_1_13; // 0x58
	::RPG::GameCore::TaskContext* Field_1_14; // 0x60
	::UnityEngine::Coroutine* Field_1_15; // 0x68
	::Class_2_6C1010345A89A766* Field_1_16; // 0x70
	::Class_1_D50913C0AC7A262A* Field_1_17; // 0x78
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* Field_1_18; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* Field_1_19; // 0x88
	::Class_1_F3391C70DC37088D* Field_1_20; // 0x90
	::Class_1_F3391C70DC37088D* Field_1_21; // 0x98
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0xA0
	::UnityEngine::Coroutine* Field_1_23; // 0xA8
	::Class_3_07C3C4D2990C49EE* Field_1_24; // 0xB0
	::Class_3_07C3C4D2990C49EE* Field_1_25; // 0xB8
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_1_26; // 0xC0
	::System::Single Field_1_27; // 0xC8
	::System::Single Field_1_28; // 0xCC
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0xD0
	::RPG::GameCore::PhotoGraphFuncBtnType Field_1_30; // 0xD4
	::RPG::Client::TextID Field_1_31; // 0xD8
	::System::Single Field_1_32; // 0xE8
	::System::Int32 Field_1_33; // 0xEC
	::System::Boolean Field_1_34; // 0xF0
	::System::Boolean Field_1_35; // 0xF1
	::System::Boolean Field_1_36; // 0xF2
	::System::Boolean Field_1_37; // 0xF3
	::RPG::GameCore::PhotoGraphFovLevel Field_1_38; // 0xF4
	::System::Single Field_1_39; // 0xF8
	::System::Int32 Field_1_40; // 0xFC
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0x100
	::System::Single Field_1_42; // 0x110
	::System::Int32 Field_1_43; // 0x114
	::System::Boolean Field_1_44; // 0x118
	::System::Boolean Field_1_45; // 0x119
	::System::Boolean Field_1_46; // 0x11A
	::System::Boolean Field_1_47; // 0x11B
	::System::Boolean Field_1_48; // 0x11C
	::System::Boolean Field_1_49; // 0x11D
	::System::Boolean Field_1_50; // 0x11E
	::System::Boolean _Active_k__BackingField; // 0x11F
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x120
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x124
	::RPG::Client::TextID Field_1_54; // 0x128

	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_02BE02AD3B7ABEC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_02BE02AD3B7ABEC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_75A528A09123ED2F(::RPG::GameCore::StringHash a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_75A528A09123ED2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4406EE3EAE9FBD6F(::RPG::GameCore::StringHash a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_4406EE3EAE9FBD6F_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_1_38E8C87591F8D4AA()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_38E8C87591F8D4AA_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_C98BEB16ED641BC0(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C98BEB16ED641BC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Boolean Method_1_467DE64208B0A974(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_467DE64208B0A974_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_40104F54A27D0FFA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_40104F54A27D0FFA_OFFSET))(this);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AB0E32D900C7A89E_OFFSET))(this);
	}

	::RPG::GameCore::PuzzleFunc Method_1_B493AAE223D9B30F()
	{
		return ((::RPG::GameCore::PuzzleFunc(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_B493AAE223D9B30F_OFFSET))(this);
	}

	::System::Boolean Method_1_FC1860485A3F1976(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_FC1860485A3F1976_OFFSET))(this, a1);
	}

	::System::Void Method_1_73D4532F584D7FC2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_73D4532F584D7FC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FF1F5DCD746CB3B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7FF1F5DCD746CB3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C348049DE90BD88C(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C348049DE90BD88C_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F2240B3DCAE3C2C(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_8F2240B3DCAE3C2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF8EA4CBC3E2C963(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_AF8EA4CBC3E2C963_OFFSET))(this, a1);
	}

	::System::Void Method_1_51FF09EBE6593DAC(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_51FF09EBE6593DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB27E09543D8ACB(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_3BB27E09543D8ACB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AB2C887EB34984A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7AB2C887EB34984A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_795059A0162B7B8D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_795059A0162B7B8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BADA5371EFDD926(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0BADA5371EFDD926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C0D3F14EE7D5F69(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_8C0D3F14EE7D5F69_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_7646FFE662147970_1_OFFSET))(this);
	}

	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
	{
		return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropComponent* get_OwnerProp()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_OWNERPROP_OFFSET))(this);
	}

	::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_OWNERPROP_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::System::Int32 get_TriggerInRangeCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerInRangeCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_TRIGGERINRANGECOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_ACTIVE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_CurrentShowTip()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIP_OFFSET))(this);
	}

	::System::Void set_CurrentShowTip(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIP_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentShowTipPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
	}

	::System::Void set_CurrentShowTipPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::PhotoGraphResultConditionPack* Method_1_A08F498172E0B379()
	{
		return ((::RPG::Client::PhotoGraphResultConditionPack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_A08F498172E0B379_OFFSET))(this);
	}

	::RPG::GameCore::PhotoGraphFovLevel Method_1_0749CA3EDD9F2FCF()
	{
		return ((::RPG::GameCore::PhotoGraphFovLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B343FAFD80A8B29B_METHOD_1_0749CA3EDD9F2FCF_OFFSET))(this);
	}
};
