#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/StableSystemPuzzlePillarStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class StableSystemPuzzleBoard; }
namespace RPG::Client::Prop { class StableSystemPuzzleLight; }
namespace RPG::Client::Prop { class StableSystemPuzzlePedestal; }
namespace RPG::Client::Prop { class StableSystemPuzzlePillar; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_GET_COLORSTATUS_OFFSET UNITYSDK_OFFSET(0xAEE3190)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_INITPILLARANDPEDESTAL_OFFSET UNITYSDK_OFFSET(0xAEE1230)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_ONPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAEE30D0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SELECTPILLAR_OFFSET UNITYSDK_OFFSET(0xAEE40B0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SETCOLORSTATUS_OFFSET UNITYSDK_OFFSET(0xAEE4790)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SET_COLORSTATUS_OFFSET UNITYSDK_OFFSET(0xAEE4830)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE48A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzlePillarAndPedestal_TypeDefinitionIndex = 72375;

	class StableSystemPuzzlePillarAndPedestal : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::StableSystemPuzzlePillar* Pillar; // 0x18
		::RPG::Client::Prop::StableSystemPuzzleLight* Light; // 0x20
		::RPG::Client::Prop::StableSystemPuzzlePedestal* Pedestal; // 0x28
		::System::Boolean CanInteract; // 0x30
		::System::Int32 x; // 0x34
		::System::Int32 y; // 0x38
		::RPG::GameCore::GameEntity* Field_5_6; // 0x40
		::RPG::Client::Prop::StableSystemPuzzleBoard* Field_5_7; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL__CTOR_OFFSET))(this);
		}

		::System::Void InitPillarAndPedestal(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::StableSystemPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::StableSystemPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_INITPILLARANDPEDESTAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetColorStatus(::RPG::Client::Prop::StableSystemPuzzlePillarStatus a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::StableSystemPuzzlePillarStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SETCOLORSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void SelectPillar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SELECTPILLAR_OFFSET))(this);
		}

		::System::Void OnPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_ONPUZZLEFINISH_OFFSET))(this);
		}

		::RPG::Client::Prop::StableSystemPuzzlePillarStatus get_ColorStatus()
		{
			return ((::RPG::Client::Prop::StableSystemPuzzlePillarStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_GET_COLORSTATUS_OFFSET))(this);
		}

		::System::Void set_ColorStatus(::RPG::Client::Prop::StableSystemPuzzlePillarStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::StableSystemPuzzlePillarStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLARANDPEDESTAL_SET_COLORSTATUS_OFFSET))(this, a1);
		}
	};
}
