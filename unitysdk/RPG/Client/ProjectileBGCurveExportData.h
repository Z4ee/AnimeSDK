#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ProjectileBGCurveExportData_KeyPathPointExPortData.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ProjectileBGCurveExportData_SectionExportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_210CB3660FB375EC_OFFSET UNITYSDK_OFFSET(0x9FFBFB0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0x9FFBAE0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_B058944D5BF068A2_OFFSET UNITYSDK_OFFSET(0x9FFBB60)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_B1E3EF67E57221AF_OFFSET UNITYSDK_OFFSET(0x9FFBC80)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFC3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ProjectileBGCurveExportData_TypeDefinitionIndex = 57401;

	class ProjectileBGCurveExportData : public ::System::Object
	{
	public:
		::System::String* SubCurveName; // 0x10
		::System::Int32 SubIndex; // 0x18
		::System::Single SessionExportMaxDistance; // 0x1C
		::System::Boolean EnableOverrideSpeed; // 0x20
		::System::Single OverrideCurveSpeed; // 0x24
		::RPG::GameCore::EaseType OverrideEaseType; // 0x28
		::UnityEngine::AnimationCurve* OverrideTimeCurve; // 0x30
		::System::Int32 SectionParts; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ProjectileBGCurveExportData_SectionExportData*>* SessionExportDataList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ProjectileBGCurveExportData_KeyPathPointExPortData>* KeyPathExportPointList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_7ABAA176B11E9110(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_7ABAA176B11E9110_OFFSET))(this, a1);
		}

		::System::Single Method_1_B1E3EF67E57221AF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_B1E3EF67E57221AF_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_B058944D5BF068A2(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_B058944D5BF068A2_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_210CB3660FB375EC(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_METHOD_1_210CB3660FB375EC_OFFSET))(this, a1);
		}
	};
}
