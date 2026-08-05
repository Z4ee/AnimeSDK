#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoZenkovResultPageConfig_NumberConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOZENKOVRESULTPAGECONFIG_GETENDANIMINTERVALSAMPLE_OFFSET UNITYSDK_OFFSET(0x17920A80)
#define MOLEMOLE_MONOZENKOVRESULTPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17920B30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZenkovResultPageConfig_TypeDefinitionIndex = 73720;

	class MonoZenkovResultPageConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Number; // 0x18
		::System::Boolean Win; // 0x1C
		::System::Single StartEndAnimTime; // 0x20
		::UnityEngine::AnimationCurve* EndAnimIntervalCurve; // 0x28
		::System::Single BoxDisplayInterval; // 0x30
		::System::Single BoxAnimSpeed; // 0x34
		::Il2CppArray<::MoleMole::MonoZenkovResultPageConfig_NumberConfig>* Configs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZENKOVRESULTPAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Single GetEndAnimIntervalSample(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZENKOVRESULTPAGECONFIG_GETENDANIMINTERVALSAMPLE_OFFSET))(this, a1, a2);
		}
	};
}
