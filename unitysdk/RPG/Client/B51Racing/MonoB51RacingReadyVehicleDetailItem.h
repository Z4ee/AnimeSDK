#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC7C5E30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7CA5C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7CA580)
#define RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC7CA4A0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingReadyVehicleDetailItem_TypeDefinitionIndex = 81962;

	class MonoB51RacingReadyVehicleDetailItem : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x40
		::RPG::Client::LocalizedText* _NameText; // 0x48
		::RPG::Client::LocalizedText* _LevelText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGREADYVEHICLEDETAILITEM__ONDESTROY_OFFSET))(this);
		}
	};
}
