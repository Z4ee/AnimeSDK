#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFRESTAURANTMODULE_TAKEOUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x95E7B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantModule_TakeOutInfo_TypeDefinitionIndex = 51705;

	class ElfRestaurantModule_TakeOutInfo : public ::System::Object
	{
	public:
		::System::Int32 Level; // 0x10

		::System::Void _ctor(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_TAKEOUTINFO__CTOR_OFFSET))(this, level);
		}
	};
}
