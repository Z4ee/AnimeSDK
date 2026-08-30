#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFDELIVERCUSTOMERRECIPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC61600)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfDeliverCustomerRecipeInfo_TypeDefinitionIndex = 63804;

	class ElfDeliverCustomerRecipeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RecipeIDList; // 0x10
		::System::Boolean IsExtraPay; // 0x18
		::System::Boolean IsDrink; // 0x19
		::System::UInt32 CustomerID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFDELIVERCUSTOMERRECIPEINFO__CTOR_OFFSET))(this);
		}
	};
}
