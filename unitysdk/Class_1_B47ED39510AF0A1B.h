#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class ChenLingBattleAirMotionConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_B47ED39510AF0A1B_METHOD_1_28A517132C194B7E_OFFSET UNITYSDK_OFFSET(0x14D81260)
#define CLASS_1_B47ED39510AF0A1B_METHOD_1_3160007B269247DF_OFFSET UNITYSDK_OFFSET(0x14D81130)
#define CLASS_1_B47ED39510AF0A1B_METHOD_1_5A8F6A8A05490D33_OFFSET UNITYSDK_OFFSET(0x14D81CC0)
#define CLASS_1_B47ED39510AF0A1B_METHOD_1_851FE7A2999F3118_OFFSET UNITYSDK_OFFSET(0x14D81720)
#define CLASS_1_B47ED39510AF0A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x14D81DB0)

inline static constexpr unsigned int Class_1_B47ED39510AF0A1B_TypeDefinitionIndex = 73845;

class Class_1_B47ED39510AF0A1B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B47ED39510AF0A1B__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_3160007B269247DF(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B47ED39510AF0A1B_METHOD_1_3160007B269247DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_28A517132C194B7E(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::ChenLingBattleAirMotionConfig* a4, ::System::Action* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::ChenLingBattleAirMotionConfig*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B47ED39510AF0A1B_METHOD_1_28A517132C194B7E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_851FE7A2999F3118(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::AnimationCurve* a7, ::System::Action* a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B47ED39510AF0A1B_METHOD_1_851FE7A2999F3118_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_5A8F6A8A05490D33(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B47ED39510AF0A1B_METHOD_1_5A8F6A8A05490D33_OFFSET))(this, a1);
	}
};
