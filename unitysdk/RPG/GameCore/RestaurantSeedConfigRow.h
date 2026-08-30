#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_5;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9DDB0)
#define RPG_GAMECORE_RESTAURANTSEEDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9E170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSeedConfigRow_TypeDefinitionIndex = 11359;

	class RestaurantSeedConfigRow : public ::System::Object
	{
	public:
		::System::String* BigCropsModelPath; // 0x10
		::System::String* CropsModelPath; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_5*>* SpecialProductList; // 0x20
		::System::UInt32 Price; // 0x28
		::System::UInt32 ProductCount; // 0x2C
		::System::UInt32 GrowTime; // 0x30
		::System::UInt32 SeedID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ItemID; // 0x48
		::System::UInt32 ProductID; // 0x4C
		::System::UInt32 SortID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSEEDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantSeedConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantSeedConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
