#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1F07C0)
#define RPG_GAMECORE_LEVELSPATIALPRISMDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSpatialPrismDesc_TypeDefinitionIndex = 17008;

	class LevelSpatialPrismDesc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelSpatialPrismDesc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelSpatialPrismDesc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
