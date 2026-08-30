#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCEF7760)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL_SET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCEF7770)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF7780)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowMapViewModel_TypeDefinitionIndex = 63975;

	class ExpeditionBattleFlowMapViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID _MapName_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL_GET_MAPNAME_OFFSET))(this);
		}

		::System::Void set_MapName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWMAPVIEWMODEL_SET_MAPNAME_OFFSET))(this, a1);
		}
	};
}
