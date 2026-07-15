#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillScreenEffectType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_7CDA84BC4B697EBC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16F11BC0)
#define CLASS_2_7CDA84BC4B697EBC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16F11C90)
#define CLASS_2_7CDA84BC4B697EBC_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16F11770)
#define CLASS_2_7CDA84BC4B697EBC_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x16F11AC0)
#define CLASS_2_7CDA84BC4B697EBC_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x16F11820)
#define CLASS_2_7CDA84BC4B697EBC_METHOD_2_A6A27D8BC3D43854_OFFSET UNITYSDK_OFFSET(0x16F119F0)
#define CLASS_2_7CDA84BC4B697EBC_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16F11930)
#define CLASS_2_7CDA84BC4B697EBC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F11D30)
#define CLASS_2_7CDA84BC4B697EBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16F11710)

inline static constexpr unsigned int Class_2_7CDA84BC4B697EBC_TypeDefinitionIndex = 68559;

class Class_2_7CDA84BC4B697EBC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::Int32 Field_2_2; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::System::Int32 Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x74
	::System::Boolean Field_2_6; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_A6A27D8BC3D43854(::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_METHOD_2_A6A27D8BC3D43854_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDA84BC4B697EBC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
