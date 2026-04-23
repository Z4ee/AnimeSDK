#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_40;
namespace RPG::Client { class EvolveBuildCard; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET UNITYSDK_OFFSET(0xB6854A0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET UNITYSDK_OFFSET(0xB6853B0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xB6854F0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xB685510)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xB685500)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xB685520)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD__CTOR_OFFSET UNITYSDK_OFFSET(0xB685490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCard_TypeDefinitionIndex = 49358;

	class EvolveBuildSelectCard : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCard* _CardData_k__BackingField; // 0x10
		::System::UInt32 _ReRollCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* Create(::System::UInt32 cardID, ::System::UInt32 reRollCount)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET))(cardID, reRollCount);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* CreateFromSelectInfo(::Class_1_7AB88D713F5121B3_40* selectInfo)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::Class_1_7AB88D713F5121B3_40*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET))(selectInfo);
		}

		::RPG::Client::EvolveBuildCard* get_CardData()
		{
			return ((::RPG::Client::EvolveBuildCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET))(this);
		}

		::System::Void set_CardData(::RPG::Client::EvolveBuildCard* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_ReRollCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET))(this, value);
		}
	};
}
