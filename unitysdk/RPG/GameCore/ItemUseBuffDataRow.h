#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ItemFoodTargetType.h"
#include "unitysdk/RPG/GameCore/ItemFoodUseTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A33B90)
#define RPG_GAMECORE_ITEMUSEBUFFDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A346F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseBuffDataRow_TypeDefinitionIndex = 13151;

	class ItemUseBuffDataRow : public ::System::Object
	{
	public:
		::System::String* UseEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam2; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemFoodUseTag>* ConsumeTag; // 0x28
		::System::UInt32 MazeBuffID; // 0x30
		::System::Int32 SatietyValue; // 0x34
		::System::Single PreviewHPRecoveryValue; // 0x38
		::System::UInt32 MazeBuffID2; // 0x3C
		::System::Single PreviewHPRecoveryPercent; // 0x40
		::System::UInt32 UseDataID; // 0x44
		::System::UInt32 UseMultipleMax; // 0x48
		::System::Single PreviewSkillPoint; // 0x4C
		::System::UInt32 ConsumeType; // 0x50
		::RPG::GameCore::ItemFoodTargetType UseTargetType; // 0x54
		::System::Boolean IsShowItemDesc; // 0x58
		::System::Boolean IsShowUseMultipleSlider; // 0x59
		::System::Boolean IsCheckHP; // 0x5A
		::System::Single PreviewPowerPercent; // 0x5C
		::System::UInt32 ActivityCount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemUseBuffDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemUseBuffDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
