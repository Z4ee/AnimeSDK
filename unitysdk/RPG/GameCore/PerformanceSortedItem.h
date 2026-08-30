#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceBackupConfig; }

#define RPG_GAMECORE_PERFORMANCESORTEDITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D42C1F0)
#define RPG_GAMECORE_PERFORMANCESORTEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D42C480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSortedItem_TypeDefinitionIndex = 18811;

	class PerformanceSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x14
		::System::Boolean IsBranch; // 0x18
		::System::Int32 Indent; // 0x1C
		::System::Boolean HasCg; // 0x20
		::RPG::GameCore::PerformanceBackupConfig* PerformanceBackupConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESORTEDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSortedItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSortedItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESORTEDITEM_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
