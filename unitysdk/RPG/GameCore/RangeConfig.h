#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17582420)
#define RPG_GAMECORE_RANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17582540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RangeConfig_TypeDefinitionIndex = 11919;

	class RangeConfig : public ::System::Object
	{
	public:
		::System::UInt32 Lower; // 0x10
		::System::UInt32 Upper; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RangeConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANGECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
