#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0A0D0)
#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0A1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DimensionIncrementsConfig_TypeDefinitionIndex = 14571;

	class DimensionIncrementsConfig : public ::System::Object
	{
	public:
		::System::UInt32 DimensionID; // 0x10
		::System::UInt32 Increments; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DimensionIncrementsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DimensionIncrementsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
