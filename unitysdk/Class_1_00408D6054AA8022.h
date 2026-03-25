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

class Class_0_16E4307DCC419505_375;
class Class_1_0C8FDD52CB727E99;
class Class_1_69FF5DE516C87A66;
class Class_1_B958907EBFDC8D4E;
class Class_1_DFC115D3A3A89EBD;
class Class_2_6C1010345A89A766;
class Class_3_5775A4FEC79026BC;
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

#define CLASS_1_00408D6054AA8022_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B10EF0)
#define CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x10B15E10)
#define CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x10B15E30)
#define CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10B15D90)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0x10B15E70)
#define CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0x10B15E50)
#define CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x10B15DD0)
#define CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0x10B15DB0)
#define CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0x10B15DF0)
#define CLASS_1_00408D6054AA8022_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x10B145F0)
#define CLASS_1_00408D6054AA8022_METHOD_1_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x10B10910)
#define CLASS_1_00408D6054AA8022_METHOD_1_0749CA3EDD9F2FCF_OFFSET UNITYSDK_OFFSET(0x10B15EB0)
#define CLASS_1_00408D6054AA8022_METHOD_1_0A560BB825D365AF_OFFSET UNITYSDK_OFFSET(0x10B138B0)
#define CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET UNITYSDK_OFFSET(0x10B14EB0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x10B12F50)
#define CLASS_1_00408D6054AA8022_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10B12EF0)
#define CLASS_1_00408D6054AA8022_METHOD_1_1DBDC5C4A1C6AE13_OFFSET UNITYSDK_OFFSET(0x10B12D40)
#define CLASS_1_00408D6054AA8022_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x10B14570)
#define CLASS_1_00408D6054AA8022_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10B12AB0)
#define CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x10B13FE0)
#define CLASS_1_00408D6054AA8022_METHOD_1_3D490A8E36C4D602_OFFSET UNITYSDK_OFFSET(0x10B13550)
#define CLASS_1_00408D6054AA8022_METHOD_1_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x10B112C0)
#define CLASS_1_00408D6054AA8022_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B129C0)
#define CLASS_1_00408D6054AA8022_METHOD_1_4406EE3EAE9FBD6F_OFFSET UNITYSDK_OFFSET(0x10B12C60)
#define CLASS_1_00408D6054AA8022_METHOD_1_467DE64208B0A974_OFFSET UNITYSDK_OFFSET(0x10B13120)
#define CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0x10B141E0)
#define CLASS_1_00408D6054AA8022_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x10B14240)
#define CLASS_1_00408D6054AA8022_METHOD_1_5B61F213C2CDD3F8_OFFSET UNITYSDK_OFFSET(0x10B15120)
#define CLASS_1_00408D6054AA8022_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x10B148E0)
#define CLASS_1_00408D6054AA8022_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x10B13210)
#define CLASS_1_00408D6054AA8022_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x10B13170)
#define CLASS_1_00408D6054AA8022_METHOD_1_73D4532F584D7FC2_OFFSET UNITYSDK_OFFSET(0x10B14140)
#define CLASS_1_00408D6054AA8022_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x10B12260)
#define CLASS_1_00408D6054AA8022_METHOD_1_75A528A09123ED2F_OFFSET UNITYSDK_OFFSET(0x10B12B30)
#define CLASS_1_00408D6054AA8022_METHOD_1_7933D8FAF1D97D04_OFFSET UNITYSDK_OFFSET(0x10B14A40)
#define CLASS_1_00408D6054AA8022_METHOD_1_7B12DCDC7C0C0CFC_OFFSET UNITYSDK_OFFSET(0x10B11670)
#define CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10B14C20)
#define CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET UNITYSDK_OFFSET(0x10B12360)
#define CLASS_1_00408D6054AA8022_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x10B15820)
#define CLASS_1_00408D6054AA8022_METHOD_1_8F2240B3DCAE3C2C_OFFSET UNITYSDK_OFFSET(0x10B12890)
#define CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10B14E30)
#define CLASS_1_00408D6054AA8022_METHOD_1_97D7BFAA84892D43_OFFSET UNITYSDK_OFFSET(0x10B13D10)
#define CLASS_1_00408D6054AA8022_METHOD_1_A08F498172E0B379_OFFSET UNITYSDK_OFFSET(0x10B15EA0)
#define CLASS_1_00408D6054AA8022_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x10B15D40)
#define CLASS_1_00408D6054AA8022_METHOD_1_AF8EA4CBC3E2C963_OFFSET UNITYSDK_OFFSET(0x10B12A10)
#define CLASS_1_00408D6054AA8022_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10B15C80)
#define CLASS_1_00408D6054AA8022_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10B14370)
#define CLASS_1_00408D6054AA8022_METHOD_1_B493AAE223D9B30F_OFFSET UNITYSDK_OFFSET(0x10B12970)
#define CLASS_1_00408D6054AA8022_METHOD_1_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0x10B15A20)
#define CLASS_1_00408D6054AA8022_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10B15E90)
#define CLASS_1_00408D6054AA8022_METHOD_1_C98BEB16ED641BC0_OFFSET UNITYSDK_OFFSET(0x10B12FB0)
#define CLASS_1_00408D6054AA8022_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B13030)
#define CLASS_1_00408D6054AA8022_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x10B14430)
#define CLASS_1_00408D6054AA8022_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x10B13080)
#define CLASS_1_00408D6054AA8022_METHOD_1_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x10B14840)
#define CLASS_1_00408D6054AA8022_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x10B126C0)
#define CLASS_1_00408D6054AA8022_METHOD_1_FC1860485A3F1976_OFFSET UNITYSDK_OFFSET(0x10B140A0)
#define CLASS_1_00408D6054AA8022_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x10B147B0)
#define CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x10B15E20)
#define CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x10B15E40)
#define CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10B15DA0)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0x10B15E80)
#define CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0x10B15E60)
#define CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x10B15DE0)
#define CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0x10B15DC0)
#define CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0x10B15E00)
#define CLASS_1_00408D6054AA8022_TICK_OFFSET UNITYSDK_OFFSET(0x10B12120)
#define CLASS_1_00408D6054AA8022__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B15F10)
#define CLASS_1_00408D6054AA8022__CTOR_OFFSET UNITYSDK_OFFSET(0x10B10280)

inline static constexpr unsigned int Class_1_00408D6054AA8022_TypeDefinitionIndex = 56753;

class Class_1_00408D6054AA8022 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_16()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x47060);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00408D6054AA8022_TypeDefinitionIndex)->GetStaticField(0x12850);
	}
	// static const ::System::Single Field_1_46; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	::Class_1_69FF5DE516C87A66* Field_1_23; // 0x10
	::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x18
	::RPG::GameCore::PhotoGraphOverrideModeConfig* Field_1_31; // 0x20
	::UnityEngine::Coroutine* Field_1_49; // 0x28
	::Class_1_B958907EBFDC8D4E* Field_1_29; // 0x30
	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x38
	::Il2CppArray<::System::String*>* Field_1_30; // 0x40
	::Class_1_69FF5DE516C87A66* Field_1_25; // 0x48
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_1_21; // 0x50
	::System::String* Field_1_8; // 0x58
	::Il2CppArray<::Class_1_DFC115D3A3A89EBD*>* Field_1_17; // 0x60
	::Class_3_5775A4FEC79026BC* Field_1_28; // 0x68
	::Class_1_69FF5DE516C87A66* Field_1_24; // 0x70
	::Class_3_5775A4FEC79026BC* Field_1_26; // 0x78
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x80
	::Class_2_6C1010345A89A766* Field_1_11; // 0x88
	::RPG::GameCore::ShowMainPageHint* Field_1_45; // 0x90
	::UnityEngine::Coroutine* Field_1_40; // 0x98
	::RPG::GameCore::TaskContext* Field_1_20; // 0xA0
	::Class_1_0C8FDD52CB727E99* Field_1_53; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* Field_1_43; // 0xB0
	::RPG::GameCore::PhotoGraphModeExtraConfigSetting* Field_1_39; // 0xB8
	::RPG::Client::PhotoGraphResultConditionPack* Field_1_48; // 0xC0
	::System::Single Field_1_32; // 0xC8
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0xCC
	::System::Boolean Field_1_27; // 0xD0
	::System::Boolean Field_1_37; // 0xD1
	::System::Boolean Field_1_51; // 0xD2
	::System::Boolean Field_1_12; // 0xD3
	::System::Single Field_1_10; // 0xD4
	::RPG::GameCore::PhotoGraphFovLevel Field_1_13; // 0xD8
	::System::Boolean Field_1_34; // 0xDC
	::System::Boolean Field_1_38; // 0xDD
	::System::Boolean Field_1_54; // 0xDE
	::System::Boolean _Active_k__BackingField; // 0xDF
	::System::Int32 Field_1_19; // 0xE0
	::System::Int32 _TriggerInRangeCount_k__BackingField; // 0xE4
	::System::Single Field_1_33; // 0xE8
	::System::Single Field_1_9; // 0xEC
	::System::Single Field_1_47; // 0xF0
	::System::Int32 Field_1_22; // 0xF4
	::RPG::Client::TextID Field_1_36; // 0xF8
	::RPG::Client::TextID Field_1_35; // 0x108
	::System::Boolean Field_1_50; // 0x118
	::System::Boolean Field_1_44; // 0x119
	::System::Boolean Field_1_14; // 0x11A
	::System::Boolean Field_1_42; // 0x11B
	::System::Int32 Field_1_41; // 0x11C
	::RPG::GameCore::PhotoGraphFuncBtnType Field_1_18; // 0x120
	::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x124
	::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0x128

	::System::Void _ctor(::Class_1_B958907EBFDC8D4E* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_1_7B12DCDC7C0C0CFC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7B12DCDC7C0C0CFC_OFFSET))(this, a1);
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

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_1_1DBDC5C4A1C6AE13()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_1DBDC5C4A1C6AE13_OFFSET))(this);
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

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_97D7BFAA84892D43()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_97D7BFAA84892D43_OFFSET))(this);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_07280B24DFAC0CA9_OFFSET))(this);
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

	::System::Void Method_1_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FF1F5DCD746CB3B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7FF1F5DCD746CB3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
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

	::System::Void Method_1_0A560BB825D365AF(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0A560BB825D365AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D490A8E36C4D602(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_3D490A8E36C4D602_OFFSET))(this, a1);
	}

	::System::Void Method_1_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_7933D8FAF1D97D04(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_7933D8FAF1D97D04_OFFSET))(this, a1);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BADA5371EFDD926(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_DFC115D3A3A89EBD*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_DFC115D3A3A89EBD*&))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_0BADA5371EFDD926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5B61F213C2CDD3F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_5B61F213C2CDD3F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
	{
		return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::PropComponent* get_OwnerProp()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERPROP_OFFSET))(this);
	}

	::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERPROP_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_OWNERENTITY_OFFSET))(this, value);
	}

	::System::Int32 get_TriggerInRangeCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerInRangeCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_TRIGGERINRANGECOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_Active()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_ACTIVE_OFFSET))(this);
	}

	::System::Void set_Active(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_ACTIVE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_AIMIDENTIFYTYPE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_CurrentShowTip()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIP_OFFSET))(this);
	}

	::System::Void set_CurrentShowTip(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIP_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentShowTipPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
	}

	::System::Void set_CurrentShowTipPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00408D6054AA8022_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, value);
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
