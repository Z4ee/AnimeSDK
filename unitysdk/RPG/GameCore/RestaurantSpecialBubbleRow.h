#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantDynamicValueType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTSPECIALBUBBLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB65E0)
#define RPG_GAMECORE_RESTAURANTSPECIALBUBBLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB68B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSpecialBubbleRow_TypeDefinitionIndex = 10854;

	class RestaurantSpecialBubbleRow : public ::System::Object
	{
	public:
		::System::String* BehaviorName; // 0x10
		::RPG::Client::TextID Content; // 0x18
		::System::UInt32 GenMaxNum; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 DynamicValue; // 0x30
		::System::UInt32 GenCustomerNumGap; // 0x34
		::RPG::GameCore::RestaurantDynamicValueType DynamicValueType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALBUBBLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantSpecialBubbleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantSpecialBubbleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALBUBBLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
