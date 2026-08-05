#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSCROLLXLOOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x17393030)
#define MOLEMOLE_MONOSCROLLXLOOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x17393080)
#define MOLEMOLE_MONOSCROLLXLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x173931A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollXLoop_TypeDefinitionIndex = 83928;

	class MonoScrollXLoop : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Speed; // 0x18
		::System::Single cycleWidth; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLXLOOP__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLXLOOP_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLXLOOP_UPDATE_OFFSET))(this);
		}
	};
}
