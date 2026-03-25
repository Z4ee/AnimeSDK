#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMPOSEITEMMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9417E40)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemMaterial_TypeDefinitionIndex = 53398;

	class ComposeItemMaterial : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 AllCostCount; // 0x14
		::System::UInt32 CostCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
