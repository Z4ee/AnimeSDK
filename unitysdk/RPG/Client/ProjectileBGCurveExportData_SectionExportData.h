#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ProjectileBGCurveExportData_SessionExportPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9FFC4A0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_LASTESTPOINT_OFFSET UNITYSDK_OFFSET(0x9FFBEA0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x9FFBF30)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_05DAE9A4B2E860C3_OFFSET UNITYSDK_OFFSET(0x9FFC4F0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_E134B9B0C81F1AED_OFFSET UNITYSDK_OFFSET(0x9FFC0F0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFC630)

namespace RPG::Client
{
	inline static constexpr unsigned int ProjectileBGCurveExportData_SectionExportData_TypeDefinitionIndex = 57404;

	class ProjectileBGCurveExportData_SectionExportData : public ::System::Object
	{
	public:
		::System::Single DistanceFromStartToOrigin; // 0x10
		::System::Single DistanceFromEndToOrigin; // 0x14
		::System::Collections::Generic::List_1<::RPG::Client::ProjectileBGCurveExportData_SessionExportPoint>* ExportPoints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA__CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_DISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastestPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_LASTESTPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_STARTPOINT_OFFSET))(this);
		}

		::System::Int32 Method_1_05DAE9A4B2E860C3(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_05DAE9A4B2E860C3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_E134B9B0C81F1AED(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_E134B9B0C81F1AED_OFFSET))(this, a1);
		}
	};
}
