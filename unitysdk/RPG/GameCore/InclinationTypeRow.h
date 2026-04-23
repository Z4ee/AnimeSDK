#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A1BB10)
#define RPG_GAMECORE_INCLINATIONTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1BBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InclinationTypeRow_TypeDefinitionIndex = 13080;

	class InclinationTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 InclinationTypeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InclinationTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InclinationTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
