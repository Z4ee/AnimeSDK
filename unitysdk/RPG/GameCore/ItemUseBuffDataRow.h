#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ItemFoodTargetType.h"
#include "unitysdk/RPG/GameCore/ItemFoodUseTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C104B50)
#define RPG_GAMECORE_ITEMUSEBUFFDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C105670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseBuffDataRow_TypeDefinitionIndex = 13770;

	class ItemUseBuffDataRow : public ::System::Object
	{
	public:
		::System::String* UseEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam2; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* MazeBuffParam; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemFoodUseTag>* ConsumeTag; // 0x28
		::System::Single PreviewSkillPoint; // 0x30
		::RPG::GameCore::ItemFoodTargetType UseTargetType; // 0x34
		::System::Boolean IsShowItemDesc; // 0x38
		::System::Boolean IsCheckHP; // 0x39
		::System::Boolean IsShowUseMultipleSlider; // 0x3A
		::System::UInt32 ActivityCount; // 0x3C
		::System::UInt32 ConsumeType; // 0x40
		::System::Single PreviewHPRecoveryPercent; // 0x44
		::System::Int32 SatietyValue; // 0x48
		::System::UInt32 MazeBuffID; // 0x4C
		::System::UInt32 UseMultipleMax; // 0x50
		::System::Single PreviewPowerPercent; // 0x54
		::System::Single PreviewHPRecoveryValue; // 0x58
		::System::UInt32 MazeBuffID2; // 0x5C
		::System::UInt32 UseDataID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemUseBuffDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemUseBuffDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
