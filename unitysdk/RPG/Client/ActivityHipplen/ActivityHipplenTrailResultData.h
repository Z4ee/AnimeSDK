#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHipplenGameGradeRow; }
namespace RPG::GameCore { class ActivityHipplenGrowthPhaseRow; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA_GET_GRADETEXT_OFFSET UNITYSDK_OFFSET(0xC55A9A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA_GET_PHASETEXT_OFFSET UNITYSDK_OFFSET(0xC55A930)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC55A840)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrailResultData_TypeDefinitionIndex = 75206;

	class ActivityHipplenTrailResultData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenGameGradeRow* _GradeRow; // 0x10
		::RPG::GameCore::ActivityHipplenGrowthPhaseRow* _GrowthPhaseRow; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_PhaseText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA_GET_PHASETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_GradeText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRAILRESULTDATA_GET_GRADETEXT_OFFSET))(this);
		}
	};
}
