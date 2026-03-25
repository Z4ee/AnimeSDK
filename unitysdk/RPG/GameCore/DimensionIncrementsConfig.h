#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17171FD0)
#define RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171720C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DimensionIncrementsConfig_TypeDefinitionIndex = 13464;

	class DimensionIncrementsConfig : public ::System::Object
	{
	public:
		::System::UInt32 Increments; // 0x10
		::System::UInt32 DimensionID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DimensionIncrementsConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DimensionIncrementsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIMENSIONINCREMENTSCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
