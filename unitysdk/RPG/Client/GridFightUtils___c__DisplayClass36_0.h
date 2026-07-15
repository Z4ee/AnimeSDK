#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB3410)
#define RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS36_0__SORTTRAITIDSBYTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x18FB6B20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUtils___c__DisplayClass36_0_TypeDefinitionIndex = 61962;

	class GridFightUtils___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameTrait* gameTrait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* _SortTraitIDsByTeam_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUTILS___C__DISPLAYCLASS36_0__SORTTRAITIDSBYTEAM_B__0_OFFSET))(this, a1);
		}
	};
}
