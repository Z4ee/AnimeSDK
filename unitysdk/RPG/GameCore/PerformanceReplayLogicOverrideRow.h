#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_927AEEA01B635CB6_1;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x199F8F90)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199F95B0)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x199F8F00)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET UNITYSDK_OFFSET(0x199F8F60)
#define RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199F9C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplayLogicOverrideRow_TypeDefinitionIndex = 13671;

	class PerformanceReplayLogicOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OverrideActiveGroup; // 0x10
		::Il2CppArray<::System::UInt32>* OverrideDeactiveGroup; // 0x18
		::Il2CppArray<::Class_1_927AEEA01B635CB6_1*>* OverridePropState; // 0x20
		::System::String* OverrideMissionAudioState; // 0x28
		::System::String* PatchLevelGraph; // 0x30
		::System::UInt32 IsOverrideActiveGroupFlag; // 0x38
		::System::Int32 OverridePerformancePriority; // 0x3C
		::System::UInt32 PerformanceID; // 0x40
		::System::UInt32 IsOverrideBranchFlag; // 0x44
		::System::UInt32 IsOverrideMissionLGDisableFlag; // 0x48
		::System::UInt32 IsOverrideMissionAudioStateFlag; // 0x4C
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x50
		::System::UInt32 IsOverridePerformancePriorityFlag; // 0x54
		::System::UInt32 IsOverridePropStateFlag; // 0x58
		::System::UInt32 IsOverrideDeactiveGroupFlag; // 0x5C
		::System::UInt32 OverrideIsBranch; // 0x60
		::System::UInt32 OverrideMissionLGDisable; // 0x64
		::System::UInt32 IsOverrideEndBlackTypeFlag; // 0x68
		::System::UInt32 OverrideIntent; // 0x6C
		::System::Int32 OverrideEndBlackType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplayLogicOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAYLOGICOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
