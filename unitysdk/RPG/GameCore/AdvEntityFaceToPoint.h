#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FaceToPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYFACETOPOINT_METHOD_3_65490802394054DB_OFFSET UNITYSDK_OFFSET(0x1CDC80C0)
#define RPG_GAMECORE_ADVENTITYFACETOPOINT_METHOD_3_BB3CE3A13A627451_OFFSET UNITYSDK_OFFSET(0x1CDC8100)
#define RPG_GAMECORE_ADVENTITYFACETOPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC80F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityFaceToPoint_TypeDefinitionIndex = 20308;

	class AdvEntityFaceToPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::FaceToPointType PointType; // 0x20
		::System::UInt32 GroupId; // 0x24
		::System::UInt32 PointID; // 0x28
		::RPG::GameCore::WaypathUsageType UsageType; // 0x2C
		::System::Boolean FinishImmediately; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65490802394054DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceToPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceToPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT_METHOD_3_65490802394054DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB3CE3A13A627451(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityFaceToPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityFaceToPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYFACETOPOINT_METHOD_3_BB3CE3A13A627451_OFFSET))(a1, a2);
		}
	};
}
