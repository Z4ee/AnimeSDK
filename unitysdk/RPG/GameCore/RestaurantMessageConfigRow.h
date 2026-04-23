#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageItemType.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB1C50)
#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB1F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantMessageConfigRow_TypeDefinitionIndex = 10889;

	class RestaurantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextItemIDList; // 0x10
		::RPG::Client::TextID MainText; // 0x18
		::System::UInt32 ItemImageID; // 0x28
		::RPG::GameCore::MessageItemType ItemType; // 0x2C
		::System::UInt32 ContactsID; // 0x30
		::RPG::GameCore::RestaurantSelectEventSenderType Sender; // 0x34
		::System::UInt32 ID; // 0x38
		::System::UInt32 OptionEffectID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantMessageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantMessageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
