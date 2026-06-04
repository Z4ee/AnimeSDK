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

class Class_0_16E4307DCC419505_401;
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

#define CLASS_1_00408D6054AA8022_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACFEE80)
#define CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAD1C3A0)
#define CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xAD1C3C0)
#define CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAD1C320)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xAD1C400)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xAD1C3E0)
#define CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xAD1C360)
#define CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xAD1C340)
#define CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xAD1C380)
#define CLASS_1_00408D6054AA8022_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xAD1A9F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_02BE02AD3B7ABEC5_OFFSET UNITYSDK_OFFSET(0xAD01440)
#define CLASS_1_00408D6054AA8022_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0xAD1C440)
#define CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0xAD1B320)
#define CLASS_1_00408D6054AA8022_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xACFFAA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xAD197A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAD19740)
#define CLASS_1_00408D6054AA8022_METHOD_1_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xAD18390)
#define CLASS_1_00408D6054AA8022_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xAD1A970)
#define CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xAD1A740)
#define CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xAD00A10)
#define CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xAD1A420)
#define CLASS_1_00408D6054AA8022_METHOD_1_3BB27E09543D8ACB_OFFSET UNITYSDK_OFFSET(0xAD19910)
#define CLASS_1_00408D6054AA8022_METHOD_1_40104F54A27D0FFA_OFFSET UNITYSDK_OFFSET(0xAD1A150)
#define CLASS_1_00408D6054AA8022_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAD19580)
#define CLASS_1_00408D6054AA8022_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0xAD19670)
#define CLASS_1_00408D6054AA8022_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0xAD033B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xAD1A570)
#define CLASS_1_00408D6054AA8022_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xAD1ACE0)
#define CLASS_1_00408D6054AA8022_METHOD_1_51FF09EBE6593DAC_OFFSET UNITYSDK_OFFSET(0xAD19CA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xAD19880)
#define CLASS_1_00408D6054AA8022_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0xAD1A4D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0xAD005F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xAD18A90)
#define CLASS_1_00408D6054AA8022_METHOD_1_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0xAD1C2D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xAD18ED0)
#define CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xAD1B090)
#define CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0xAD18F70)
#define CLASS_1_00408D6054AA8022_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xAD192D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0xAD19490)
#define CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAD1B2A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0xAD1AE40)
#define CLASS_1_00408D6054AA8022_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0xAD1C430)
#define CLASS_1_00408D6054AA8022_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xAD1BCD0)
#define CLASS_1_00408D6054AA8022_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xAD1A830)
#define CLASS_1_00408D6054AA8022_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0xAD195D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0xAD02D10)
#define CLASS_1_00408D6054AA8022_METHOD_1_C348049DE90BD88C_OFFSET UNITYSDK_OFFSET(0xAD1A5D0)
#define CLASS_1_00408D6054AA8022_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xAD1C420)
#define CLASS_1_00408D6054AA8022_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0xAD19800)
#define CLASS_1_00408D6054AA8022_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAD023A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_D442D2E24BD9AC5C_OFFSET UNITYSDK_OFFSET(0xAD02870)
#define CLASS_1_00408D6054AA8022_METHOD_1_D7953C46D82FED5E_OFFSET UNITYSDK_OFFSET(0xAD1BF20)
#define CLASS_1_00408D6054AA8022_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xAD1C1F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xAD02520)
#define CLASS_1_00408D6054AA8022_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0xAD1B5E0)
#define CLASS_1_00408D6054AA8022_METHOD_1_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0xAD1AC40)
#define CLASS_1_00408D6054AA8022_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0xAD026A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xAD1ABB0)
#define CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAD1C3B0)
#define CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xAD1C3D0)
#define CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xAD1C330)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xAD1C410)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xAD1C3F0)
#define CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xAD1C370)
#define CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xAD1C350)
#define CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xAD1C390)
#define CLASS_1_00408D6054AA8022_TICK_OFFSET UNITYSDK_OFFSET(0xACFF380)
#define CLASS_1_00408D6054AA8022__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD1C490)
#define CLASS_1_00408D6054AA8022__CTOR_OFFSET UNITYSDK_OFFSET(0xAD02D60)

inline static constexpr unsigned int Class_1_00408D6054AA8022_TypeDefinitionIndex = 64919;

class Class_1_00408D6054AA8022 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x232E0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x8F20);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::Class_1_BCD7402D15D7184C* Field_1_4; // 0x10
	::RPG::GameCore::TaskContext* Field_1_5; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_1_6; // 0x20
	::Class_1_F3391C70DC37088D* Field_1_7; // 0x28
	::System::String* Field_1_8; // 0x30
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x38
	::UnityEngine::Coroutine* Field_1_10; // 0x40
	::Il2CppArray<::System::String*>* Field_1_11; // 0x48
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_1_12; // 0x50
	::RPG::Client::PhotoGraphResultConditionPack* Field_1_13; // 0x58
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x60
	::Class_1_D50913C0AC7A262A* Field_1_15; // 0x68
	::Class_2_6C1010345A89A766* Field_1_16; // 0x70
	::Il2CppArray<::Class_1_2A2B2DC1DA1205FE*>* Field_1_17; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* Field_1_18; // 0x80
	::RPG::GameCore::ShowMainPageHint* Field_1_19; // 0x88
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* Field_1_20; // 0x90
	::Class_1_F3391C70DC37088D* Field_1_21; // 0x98
	::UnityEngine::Coroutine* Field_1_22; // 0xA0
	::Class_3_07C3C4D2990C49EE* Field_1_23; // 0xA8
	::RPG::GameCore::PhotoGraphOverrideModeConfig* Field_1_24; // 0xB0
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0xB8
	::Class_1_F3391C70DC37088D* Field_1_26; // 0xC0
	::System::Int32 Field_1_27; // 0xC8
	::RPG::GameCore::PhotoGraphFovLevel Field_1_28; // 0xCC
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0xD0
	::System::Int32 Field_1_30; // 0xD4
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0xD8
	::RPG::Client::TextID Field_1_32; // 0xE8
	::System::Boolean Field_1_33; // 0xF8
	::System::Boolean Field_1_34; // 0xF9
	::System::Boolean Field_1_35; // 0xFA
	::System::Boolean Field_1_36; // 0xFB
	::System::Single Field_1_37; // 0xFC
	::RPG::Client::TextID Field_1_38; // 0x100
	::RPG::GameCore::PhotoGraphFuncBtnType Field_1_39; // 0x110
	::System::Boolean _Active_k__BackingField; // 0x114
	::System::Boolean Field_1_41; // 0x115
	::System::Boolean Field_1_42; // 0x116
	::System::Boolean Field_1_43; // 0x117
	::System::Int32 Field_1_44; // 0x118
	::System::Single Field_1_45; // 0x11C
	::System::Single Field_1_46; // 0x120
	::System::Boolean Field_1_47; // 0x124
	::System::Boolean Field_1_48; // 0x125
	::System::Boolean Field_1_49; // 0x126
	::System::Boolean Field_1_50; // 0x127
	::System::Single Field_1_51; // 0x128
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x12C
	::System::Single Field_1_53; // 0x130
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x134

	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_02BE02AD3B7ABEC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_02BE02AD3B7ABEC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_75A528A09123ED2F(::RPG::GameCore::StringHash a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_75A528A09123ED2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4406EE3EAE9FBD6F(::RPG::GameCore::StringHash a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_4406EE3EAE9FBD6F_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_1_D442D2E24BD9AC5C()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_D442D2E24BD9AC5C_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_C98BEB16ED641BC0(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_C98BEB16ED641BC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Boolean Method_1_467DE64208B0A974(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_467DE64208B0A974_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_40104F54A27D0FFA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_40104F54A27D0FFA_OFFSET))(this);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_2839AE123F8ECAA7_OFFSET))(this);
	}

	::RPG::GameCore::PuzzleFunc Method_1_B493AAE223D9B30F()
	{
		return ((::RPG::GameCore::PuzzleFunc(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_B493AAE223D9B30F_OFFSET))(this);
	}

	::System::Boolean Method_1_FC1860485A3F1976(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_FC1860485A3F1976_OFFSET))(this, a1);
	}

	::System::Void Method_1_73D4532F584D7FC2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_73D4532F584D7FC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FF1F5DCD746CB3B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C348049DE90BD88C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_C348049DE90BD88C_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F2240B3DCAE3C2C(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_8F2240B3DCAE3C2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF8EA4CBC3E2C963(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_AF8EA4CBC3E2C963_OFFSET))(this, a1);
	}

	::System::Void Method_1_51FF09EBE6593DAC(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_51FF09EBE6593DAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB27E09543D8ACB(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3BB27E09543D8ACB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9BFE7737D26CFA72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_9BFE7737D26CFA72_OFFSET))(this, a1);
	}

	::System::Void Method_1_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BADA5371EFDD926(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7953C46D82FED5E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_D7953C46D82FED5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7646FFE662147970_1_OFFSET))(this);
	}

	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
	{
		return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropComponent* get_OwnerProp()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET))(this);
	}

	::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::System::Int32 get_TriggerInRangeCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerInRangeCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_CurrentShowTip()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET))(this);
	}

	::System::Void set_CurrentShowTip(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentShowTipPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
	}

	::System::Void set_CurrentShowTipPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::PhotoGraphResultConditionPack* Method_1_A08F498172E0B379()
	{
		return ((::RPG::Client::PhotoGraphResultConditionPack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A08F498172E0B379_OFFSET))(this);
	}

	::RPG::GameCore::PhotoGraphFovLevel Method_1_0749CA3EDD9F2FCF()
	{
		return ((::RPG::GameCore::PhotoGraphFovLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0749CA3EDD9F2FCF_OFFSET))(this);
	}
};
