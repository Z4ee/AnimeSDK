#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93B360)
#define RPG_GAMECORE_ROGUEMAGICLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerRow_TypeDefinitionIndex = 14689;

	class RogueMagicLayerRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::System::UInt32 LayerNumID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicLayerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicLayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
