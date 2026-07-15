#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_EXPITEMPLAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1866CAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator_ExpItemPlan_TypeDefinitionIndex = 59707;

	class AvatarQuickGrowCalculator_ExpItemPlan : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ItemCosts; // 0x10
		::System::UInt32 LeftExp; // 0x18
		::System::UInt32 ProvidedExp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_EXPITEMPLAN__CTOR_OFFSET))(this);
		}
	};
}
