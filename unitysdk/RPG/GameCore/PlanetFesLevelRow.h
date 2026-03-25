#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class PlanetFesBigInt; }

#define RPG_GAMECORE_PLANETFESLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BD350)
#define RPG_GAMECORE_PLANETFESLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BDAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelRow_TypeDefinitionIndex = 11131;

	class PlanetFesLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GrantItemList; // 0x10
		::RPG::GameCore::PlanetFesBigInt* CostNum; // 0x18
		::Il2CppArray<::System::UInt32>* BasicBuffIDList; // 0x20
		::Il2CppArray<::System::UInt32>* NewTipsList; // 0x28
		::RPG::GameCore::PlanetFesBigInt* GrantGold; // 0x30
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x38
		::RPG::Client::TextID Description; // 0x40
		::System::UInt32 QuestID; // 0x50
		::System::UInt32 Level; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
