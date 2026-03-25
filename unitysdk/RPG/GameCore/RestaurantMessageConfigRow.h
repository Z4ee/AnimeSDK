#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageItemType.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A5F10)
#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A6210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantMessageConfigRow_TypeDefinitionIndex = 10638;

	class RestaurantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextItemIDList; // 0x10
		::System::UInt32 OptionEffectID; // 0x18
		::System::UInt32 ItemImageID; // 0x1C
		::RPG::Client::TextID MainText; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 ContactsID; // 0x34
		::RPG::GameCore::RestaurantSelectEventSenderType Sender; // 0x38
		::RPG::GameCore::MessageItemType ItemType; // 0x3C

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
