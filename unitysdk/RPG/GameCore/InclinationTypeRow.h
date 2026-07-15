#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B00DFF0)
#define RPG_GAMECORE_INCLINATIONTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00E0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InclinationTypeRow_TypeDefinitionIndex = 13309;

	class InclinationTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 InclinationTypeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InclinationTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InclinationTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
