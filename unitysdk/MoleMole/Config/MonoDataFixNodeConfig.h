#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_MONODATAFIXNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C470800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonoDataFixNodeConfig_TypeDefinitionIndex = 42365;

	class MonoDataFixNodeConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DataFixCwRotateTime; // 0x18
		::UnityEngine::AnimationCurve* DataFixCwRotateCurve; // 0x20
		::Il2CppArray<::UnityEngine::Color>* DataFixColors; // 0x28
		::Il2CppArray<::UnityEngine::Color>* DataFixColorsUnConnect; // 0x30
		::System::Single DataFixResetCCWTime; // 0x38
		::UnityEngine::AnimationCurve* DataFixResetCCWCurve; // 0x40
		::System::Single DataFixResetRatio; // 0x48
		::System::Single DataFixConnectUpdateInterval; // 0x4C
		::System::Single DataFixNullNodeTotalTime; // 0x50
		::System::Single DataFixNullNodeCompensation; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONODATAFIXNODECONFIG__CTOR_OFFSET))(this);
		}
	};
}
