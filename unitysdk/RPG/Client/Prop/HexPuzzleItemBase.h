#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"

#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET UNITYSDK_OFFSET(0xA0A0010)
#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A0060)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HexPuzzleItemBase_TypeDefinitionIndex = 64062;

	class HexPuzzleItemBase : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::Struct_2_2F8FC043285F98CD Field_6_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::Struct_2_2F8FC043285F98CD get_Coord()
		{
			return ((::Struct_2_2F8FC043285F98CD(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET))(this);
		}
	};
}
