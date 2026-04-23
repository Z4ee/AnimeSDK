#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_927AEEA01B635CB6_2;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18BE6DC0)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BE73F0)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18BE6D30)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18BE6D90)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE7A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayLogicOverrideRow_TypeDefinitionIndex = 13601;

	class PerformanceReplayLogicOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OverrideActiveGroup; // 0x10
		::System::String* OverrideMissionAudioState; // 0x18
		::System::String* PatchLevelGraph; // 0x20
		::Il2CppArray<::Class_1_927AEEA01B635CB6_2*>* OverridePropState; // 0x28
		::Il2CppArray<::System::UInt32>* OverrideDeactiveGroup; // 0x30
		::System::UInt32 IsOverrideMissionLGDisableFlag; // 0x38
		::System::UInt32 OverrideMissionLGDisable; // 0x3C
		::System::UInt32 OverrideIntent; // 0x40
		::System::UInt32 IsOverrideDeactiveGroupFlag; // 0x44
		::System::UInt32 IsOverrideEndBlackTypeFlag; // 0x48
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x4C
		::System::UInt32 IsOverrideBranchFlag; // 0x50
		::System::Int32 OverridePerformancePriority; // 0x54
		::System::UInt32 IsOverrideMissionAudioStateFlag; // 0x58
		::System::UInt32 OverrideIsBranch; // 0x5C
		::System::UInt32 PerformanceID; // 0x60
		::System::UInt32 IsOverrideActiveGroupFlag; // 0x64
		::System::Int32 OverrideEndBlackType; // 0x68
		::System::UInt32 IsOverridePropStateFlag; // 0x6C
		::System::UInt32 IsOverridePerformancePriorityFlag; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
