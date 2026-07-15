#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1039;
class Class_1_84A8303CB3C9005F_1;
class Class_1_D2E90365D99FC7E6_13;
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class AbilityCharacterModelChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class PlayCrossHairPreviewFadeIn; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CCC2A455DACD1DBC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1649A730)
#define CLASS_2_CCC2A455DACD1DBC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1649A9D0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_025C809DC116AF4A_OFFSET UNITYSDK_OFFSET(0x164980D0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x16497C40)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_09D9050473A6BF3D_OFFSET UNITYSDK_OFFSET(0x16497DA0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_154F67CFA827B797_OFFSET UNITYSDK_OFFSET(0x16499490)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x16499F80)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x16498E70)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_1B94A88BE931511B_OFFSET UNITYSDK_OFFSET(0x164992C0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0x16499220)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16498D30)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x164991C0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x16498AB0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x164988C0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_54102ABB36094D2E_OFFSET UNITYSDK_OFFSET(0x16499110)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x164993E0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_809094DEBF13B21A_1_OFFSET UNITYSDK_OFFSET(0x16499760)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x16499710)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16498ED0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x16497800)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x164997B0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1649A190)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x16499080)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16497260)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_AC0A861D21B49239_OFFSET UNITYSDK_OFFSET(0x16499870)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x16498650)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x16499160)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x164972C0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_E44A8E4E3318F2F0_OFFSET UNITYSDK_OFFSET(0x16498440)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_EF75714A3E0ACAEB_OFFSET UNITYSDK_OFFSET(0x16499330)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x16497F10)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1649A260)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1649A320)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x1649A3E0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x1649A4F0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x1649A5B0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x1649A670)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1649A0C0)
#define CLASS_2_CCC2A455DACD1DBC_METHOD_2_FFBC3E5986CAC663_OFFSET UNITYSDK_OFFSET(0x16499270)
#define CLASS_2_CCC2A455DACD1DBC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16497150)
#define CLASS_2_CCC2A455DACD1DBC_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16497CE0)
#define CLASS_2_CCC2A455DACD1DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1649AC40)
#define CLASS_2_CCC2A455DACD1DBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x164981A0)
#define CLASS_2_CCC2A455DACD1DBC__ONTICK_OFFSET UNITYSDK_OFFSET(0x16498C90)

inline static constexpr unsigned int Class_2_CCC2A455DACD1DBC_TypeDefinitionIndex = 68341;

class Class_2_CCC2A455DACD1DBC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::UnityEngine::GameObject* Field_2_8; // 0x60
	::UnityEngine::Animation* Field_2_9; // 0x68
	::UnityEngine::GameObject* Field_2_10; // 0x70
	::Class_0_16E4307DCC419505_1039* Field_2_11; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_12; // 0x80
	::RPG::Client::PrefabLoadMeta* Field_2_13; // 0x88
	::System::String* Field_2_14; // 0x90
	::RPG::Client::PipelineCameraEngine* Field_2_15; // 0x98
	::RPG::GameCore::GameEntity* Field_2_16; // 0xA0
	::RPG::GameCore::LevelUIComponent* Field_2_17; // 0xA8
	::UnityEngine::Transform* Field_2_18; // 0xB0
	::UnityEngine::Transform* Field_2_19; // 0xB8
	::System::String* Field_2_20; // 0xC0
	::UnityEngine::Transform* Field_2_21; // 0xC8
	::RPG::Client::UIFollow3DTarget* Field_2_22; // 0xD0
	::UnityEngine::Vector3 Field_2_23; // 0xD8
	::System::Boolean Field_2_24; // 0xE4
	::System::Boolean Field_2_25; // 0xE5
	::System::Boolean Field_2_26; // 0xE6
	::UnityEngine::Vector3 Field_2_27; // 0xE8
	::System::Boolean Field_2_28; // 0xF4
	::System::Boolean Field_2_29; // 0xF5
	::System::Boolean Field_2_30; // 0xF6
	::System::Boolean Field_2_31; // 0xF7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::Class_1_84A8303CB3C9005F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_84A8303CB3C9005F_1*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_025C809DC116AF4A(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_025C809DC116AF4A_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Boolean Method_2_54102ABB36094D2E(::Class_0_16E4307DCC419505_1039* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1039*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_54102ABB36094D2E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_21093493642AEBDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_21093493642AEBDA_OFFSET))(this);
	}

	::System::Void Method_2_FFBC3E5986CAC663()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_FFBC3E5986CAC663_OFFSET))(this);
	}

	::System::Void Method_2_1B94A88BE931511B(::RPG::Client::MonsterPhaseChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_1B94A88BE931511B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF75714A3E0ACAEB(::RPG::GameCore::AbilityCharacterModelChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCharacterModelChange*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_EF75714A3E0ACAEB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EA54838B888644E(::Class_1_D2E90365D99FC7E6_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2E90365D99FC7E6_13*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}

	::System::Void Method_2_154F67CFA827B797(::RPG::GameCore::PlayCrossHairPreviewFadeIn* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_154F67CFA827B797_OFFSET))(this, a1);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_809094DEBF13B21A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_809094DEBF13B21A_1_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_09D9050473A6BF3D(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_09D9050473A6BF3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_E44A8E4E3318F2F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_E44A8E4E3318F2F0_OFFSET))(this);
	}

	::System::Void Method_2_AC0A861D21B49239(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_AC0A861D21B49239_OFFSET))(this, a1);
	}

	::System::String* Method_2_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_1798FAFF45053267_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC2A455DACD1DBC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
