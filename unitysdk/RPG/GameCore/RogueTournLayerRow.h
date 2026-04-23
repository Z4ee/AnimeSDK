#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D786B0)
#define RPG_GAMECORE_ROGUETOURNLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D78E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournLayerRow_TypeDefinitionIndex = 14162;

	class RogueTournLayerRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::System::UInt32 LayerNumID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournLayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournLayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
