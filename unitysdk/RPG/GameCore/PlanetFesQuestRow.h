#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesQuestType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BEFD0)
#define RPG_GAMECORE_PLANETFESQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BF310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesQuestRow_TypeDefinitionIndex = 11149;

	class PlanetFesQuestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardItemList; // 0x18
		::RPG::Client::TextID Description; // 0x20
		::RPG::GameCore::PlanetFesQuestType QuestType; // 0x30
		::System::UInt32 FinishwayID; // 0x34
		::System::UInt32 ID; // 0x38
		::RPG::Client::TextID Name; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
