#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ProjectileBGCurveExportData_SessionExportPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x193A2330)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_LASTESTPOINT_OFFSET UNITYSDK_OFFSET(0x193A1C90)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x193A1D30)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_808C6C68ABE77F5C_OFFSET UNITYSDK_OFFSET(0x193A1F20)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_E95D3AD413F190D9_OFFSET UNITYSDK_OFFSET(0x193A2380)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193A24F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ProjectileBGCurveExportData_SectionExportData_TypeDefinitionIndex = 67003;

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

		::System::Int32 Method_1_E95D3AD413F190D9(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_E95D3AD413F190D9_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_808C6C68ABE77F5C(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_SECTIONEXPORTDATA_METHOD_1_808C6C68ABE77F5C_OFFSET))(this, a1);
		}
	};
}
