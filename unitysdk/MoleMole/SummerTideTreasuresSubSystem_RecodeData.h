#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RECODEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180A1690)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RECODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x180A1770)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RecodeData_TypeDefinitionIndex = 80762;

	class SummerTideTreasuresSubSystem_RecodeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LowMonsterTimes; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* GetBuffs; // 0x18
		::System::UInt32 Duration; // 0x20
		::System::UInt32 HitByMutCount; // 0x24
		::System::UInt32 HitByStoreCount; // 0x28
		::System::UInt32 ResultType; // 0x2C
		::System::UInt32 SkillCount; // 0x30
		::System::UInt32 FeverCount; // 0x34
		::System::UInt32 InterruptRushCount; // 0x38
		::System::UInt32 RushCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RECODEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RECODEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
