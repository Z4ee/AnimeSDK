#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196BBD40)
#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196BBE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DifficultyAdjustmentStageRow_TypeDefinitionIndex = 14421;

	class DifficultyAdjustmentStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventIDs; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DifficultyAdjustmentStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DifficultyAdjustmentStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
