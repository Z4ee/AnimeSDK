#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }

#define RPG_CLIENT_DRINKMAKERMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A683490)
#define RPG_CLIENT_DRINKMAKERMODULE___C__DISPLAYCLASS19_0__GETTAGBYQUANTIFYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1A689E00)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerModule___c__DisplayClass19_0_TypeDefinitionIndex = 63694;

	class DrinkMakerModule___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerQuantifyTagType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTagByQuantifyType_b__0(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___C__DISPLAYCLASS19_0__GETTAGBYQUANTIFYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
