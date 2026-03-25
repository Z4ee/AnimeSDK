#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultipleDropData; }

#define RPG_CLIENT_MULTIPLEDROPUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3080)
#define RPG_CLIENT_MULTIPLEDROPUTILS___C__DISPLAYCLASS4_0__ISINSPECIFICMULTIPLEDROP_B__0_OFFSET UNITYSDK_OFFSET(0x9DB3960)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUtils___c__DisplayClass4_0_TypeDefinitionIndex = 53944;

	class MultipleDropUtils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityFarmMultipleDropType dropType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsInSpecificMultipleDrop_b__0(::RPG::Client::MultipleDropData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS___C__DISPLAYCLASS4_0__ISINSPECIFICMULTIPLEDROP_B__0_OFFSET))(this, t);
		}
	};
}
