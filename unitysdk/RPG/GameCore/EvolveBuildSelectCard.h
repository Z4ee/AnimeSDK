#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_42;
namespace RPG::Client { class EvolveBuildCard; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET UNITYSDK_OFFSET(0xE63B180)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET UNITYSDK_OFFSET(0xE63B090)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xE63B1D0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xE63B1F0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xE63B1E0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET UNITYSDK_OFFSET(0xE63B200)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARD__CTOR_OFFSET UNITYSDK_OFFSET(0xE63B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCard_TypeDefinitionIndex = 53791;

	class EvolveBuildSelectCard : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildCard* _CardData_k__BackingField; // 0x10
		::System::UInt32 _ReRollCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildSelectCard* CreateFromSelectInfo(::Class_1_7AB88D713F5121B3_42* a1)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::Class_1_7AB88D713F5121B3_42*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_CREATEFROMSELECTINFO_OFFSET))(a1);
		}

		::RPG::Client::EvolveBuildCard* get_CardData()
		{
			return ((::RPG::Client::EvolveBuildCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_CARDDATA_OFFSET))(this);
		}

		::System::Void set_CardData(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_CARDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReRollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_GET_REROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_ReRollCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARD_SET_REROLLCOUNT_OFFSET))(this, a1);
		}
	};
}
