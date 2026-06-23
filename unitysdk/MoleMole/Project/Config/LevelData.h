#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4E7B8E0B6291DEBC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class ControlPointData; }
namespace MoleMole::Project::Config { class CurvePointData; }
namespace MoleMole::Project::Config { class CurvySplineData; }
namespace MoleMole::Project::Config { class DetectionPointData; }
namespace MoleMole::Project::Config { class NoDetectionZoneData; }
namespace MoleMole::Project::Config { class TargetPointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PROJECT_CONFIG_LEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94F0A0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int LevelData_TypeDefinitionIndex = 13606;

	class LevelData : public ::System::Object
	{
	public:
		::System::Int32 gameId; // 0x10
		::System::Int32 levelId; // 0x14
		::System::String* textKey; // 0x18
		::System::Int32 tutorialId; // 0x20
		::System::Int32 difficulty; // 0x24
		::Enum_3_4E7B8E0B6291DEBC bezierUIType; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* controlPoints; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* hintControlPoints; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* curvePoints; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* targetPoints; // 0x48
		::MoleMole::Project::Config::DetectionPointData* detectionPointData; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* noDetectionZone; // 0x58
		::MoleMole::Project::Config::CurvySplineData* splineData; // 0x60
		::MoleMole::Project::Config::CurvySplineData* hintSplineData; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_LEVELDATA__CTOR_OFFSET))(this);
		}
	};
}
