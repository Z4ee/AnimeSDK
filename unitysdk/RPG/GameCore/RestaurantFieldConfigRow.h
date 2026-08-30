#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTFIELDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB99DF0)
#define RPG_GAMECORE_RESTAURANTFIELDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9A0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFieldConfigRow_TypeDefinitionIndex = 11353;

	class RestaurantFieldConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PropConfigIDList; // 0x10
		::Il2CppArray<::System::UInt32>* BigCropsReplaceConfigIDList; // 0x18
		::Il2CppArray<::System::UInt32>* PropGroupIDList; // 0x20
		::Il2CppArray<::System::UInt32>* ConfigIDList; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::System::UInt32 Price; // 0x38
		::System::UInt32 BigCropsConfigID; // 0x3C
		::System::UInt32 FieldID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFIELDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantFieldConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantFieldConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFIELDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
