#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB36C0)
#define RPG_GAMECORE_RESTAURANTQUESTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB3A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantQuestGroupRow_TypeDefinitionIndex = 10897;

	class RestaurantQuestGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x18
		::System::String* IMGPath; // 0x20
		::RPG::Client::TextID CharacterName; // 0x28
		::RPG::Client::TextID Content; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 QuestGroupID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTQUESTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantQuestGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantQuestGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTQUESTGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
