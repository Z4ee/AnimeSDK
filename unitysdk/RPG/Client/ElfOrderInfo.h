#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFORDERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC82210)
#define RPG_CLIENT_ELFORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC82250)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfOrderInfo_TypeDefinitionIndex = 63805;

	class ElfOrderInfo : public ::System::Object
	{
	public:
		::System::UInt32 RecipeLevel; // 0x10
		::System::UInt32 RecipeID; // 0x14
		::System::Single CookTime; // 0x18
		::System::Single CookedTime; // 0x1C
		::System::Int32 ChefRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFORDERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFORDERINFO_DISPOSE_OFFSET))(this);
		}
	};
}
