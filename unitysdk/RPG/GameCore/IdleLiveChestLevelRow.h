#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVECHESTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0F080)
#define RPG_GAMECORE_IDLELIVECHESTLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0F1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChestLevelRow_TypeDefinitionIndex = 11187;

	class IdleLiveChestLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 ExpUpLimit; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveChestLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveChestLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHESTLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
