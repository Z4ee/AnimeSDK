#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D75AE0)
#define RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D75BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaRandomRow_TypeDefinitionIndex = 14213;

	class RogueTournFormulaRandomRow : public ::System::Object
	{
	public:
		::System::UInt32 RandomID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournFormulaRandomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaRandomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULARANDOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
