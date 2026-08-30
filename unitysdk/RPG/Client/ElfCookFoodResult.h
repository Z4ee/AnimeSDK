#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFCOOKFOODRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC615F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCookFoodResult_TypeDefinitionIndex = 63813;

	class ElfCookFoodResult : public ::System::Object
	{
	public:
		::System::Boolean IsPerfect; // 0x10
		::System::Int32 ChefRuntimeID; // 0x14
		::System::UInt32 RecipeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCOOKFOODRESULT__CTOR_OFFSET))(this);
		}
	};
}
