#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xADB1CE0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_RESETDITHERING_OFFSET UNITYSDK_OFFSET(0xADB1E60)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_STARTDITHERHIDE_OFFSET UNITYSDK_OFFSET(0xADB1D90)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xADB1F20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementStageSlotView_TypeDefinitionIndex = 71962;

	class ChimeraArrangementStageSlotView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Index; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* _DitherCtrl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void StartDitherHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_STARTDITHERHIDE_OFFSET))(this);
		}

		::System::Void ResetDithering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTAGESLOTVIEW_RESETDITHERING_OFFSET))(this);
		}
	};
}
