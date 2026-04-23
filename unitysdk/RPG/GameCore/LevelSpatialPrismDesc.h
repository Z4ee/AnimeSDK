#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5A980)
#define RPG_GAMECORE_LEVELSPATIALPRISMDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5A9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSpatialPrismDesc_TypeDefinitionIndex = 16322;

	class LevelSpatialPrismDesc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelSpatialPrismDesc*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSpatialPrismDesc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET))(array, val);
		}
	};
}
