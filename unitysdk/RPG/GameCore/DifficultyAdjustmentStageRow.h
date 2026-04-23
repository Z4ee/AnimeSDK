#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1887EEF0)
#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1887F010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DifficultyAdjustmentStageRow_TypeDefinitionIndex = 14380;

	class DifficultyAdjustmentStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventIDs; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DifficultyAdjustmentStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DifficultyAdjustmentStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
