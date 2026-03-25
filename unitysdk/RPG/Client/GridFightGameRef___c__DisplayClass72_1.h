#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRef___c__DisplayClass72_0; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS72_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9829E80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS72_1__UNLIKE_B__1_OFFSET UNITYSDK_OFFSET(0x9829E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass72_1_TypeDefinitionIndex = 52531;

	class GridFightGameRef___c__DisplayClass72_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef___c__DisplayClass72_0* CS___8__locals1; // 0x10
		::System::Boolean success; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS72_1__CTOR_OFFSET))(this);
		}

		::System::Void _Unlike_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS72_1__UNLIKE_B__1_OFFSET))(this);
		}
	};
}
