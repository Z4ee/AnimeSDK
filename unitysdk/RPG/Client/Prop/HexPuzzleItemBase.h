#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"

#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET UNITYSDK_OFFSET(0x160F4440)
#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x160F4490)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HexPuzzleItemBase_TypeDefinitionIndex = 78141;

	class HexPuzzleItemBase : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::Struct_2_32361ACFB28DADC0 HOGCHABAPFK; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::Struct_2_32361ACFB28DADC0 get_Coord()
		{
			return ((::Struct_2_32361ACFB28DADC0(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET))(this);
		}
	};
}
