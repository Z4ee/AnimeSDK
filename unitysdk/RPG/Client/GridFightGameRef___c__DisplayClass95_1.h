#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRef___c__DisplayClass95_0; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C5240)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__LIKE_B__1_OFFSET UNITYSDK_OFFSET(0xA4C5250)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass95_1_TypeDefinitionIndex = 59569;

	class GridFightGameRef___c__DisplayClass95_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef___c__DisplayClass95_0* CS___8__locals1; // 0x10
		::System::Boolean success; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__CTOR_OFFSET))(this);
		}

		::System::Void _Like_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__LIKE_B__1_OFFSET))(this);
		}
	};
}
