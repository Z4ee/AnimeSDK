#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooQuestType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C963B0)
#define RPG_GAMECORE_SPACEZOOQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C96A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooQuestRow_TypeDefinitionIndex = 11806;

	class SpaceZooQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID QuestTabName; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::SpaceZooQuestType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
