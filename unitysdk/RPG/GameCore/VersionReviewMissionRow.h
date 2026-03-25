#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VERSIONREVIEWMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178EEF70)
#define RPG_GAMECORE_VERSIONREVIEWMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178EF540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersionReviewMissionRow_TypeDefinitionIndex = 12960;

	class VersionReviewMissionRow : public ::System::Object
	{
	public:
		::System::UInt32 StoryPerformanceID; // 0x10
		::System::UInt32 PreMainMissionID; // 0x14
		::System::UInt32 StoryStartEntranceID; // 0x18
		::System::UInt32 ReviewMainMissionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONREVIEWMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VersionReviewMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VersionReviewMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONREVIEWMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
