#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER_CALCULATEORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x195FCBE0)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x195FCB30)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195FCDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyRandomEventVCController_TypeDefinitionIndex = 72763;

	class MonopolyRandomEventVCController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x18
		::System::Single PhoneModeOrthographicSizeIn4To3; // 0x20
		::System::Single PhoneModeOrthographicSizeIn16To9; // 0x24
		::System::Single PcModeOrthographicSizeIn4To3; // 0x28
		::System::Single PcModeOrthographicSizeIn16To9; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER_START_OFFSET))(this);
		}

		::System::Void CalculateOrthographicSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTVCCONTROLLER_CALCULATEORTHOGRAPHICSIZE_OFFSET))(this);
		}
	};
}
