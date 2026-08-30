#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC8E260)
#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_ISCOOKITEMENOUGH_OFFSET UNITYSDK_OFFSET(0x1AC8E6C0)
#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC8E6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantDrinkRecipeData_TypeDefinitionIndex = 63800;

	class ElfRestaurantDrinkRecipeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x10
		::System::Int32 Price; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantDrinkRecipeData* Create(::System::Int32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDrinkRecipeData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsCookItemEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_ISCOOKITEMENOUGH_OFFSET))(this);
		}
	};
}
