#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174A3FB0)
#define RPG_GAMECORE_PETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174A40F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetConfigRow_TypeDefinitionIndex = 13185;

	class PetConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PetItemID; // 0x10
		::System::UInt32 SummonUnitID; // 0x14
		::System::UInt32 PetID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
