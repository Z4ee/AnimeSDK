#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PVSREGIONPICKSAMPLERGIZMOSDRAWER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xC491AB0)
#define PVSREGIONPICKSAMPLERGIZMOSDRAWER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xC491CA0)
#define PVSREGIONPICKSAMPLERGIZMOSDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0xC491D00)

inline static constexpr unsigned int PVSRegionPickSamplerGizmosDrawer_TypeDefinitionIndex = 47761;

class PVSRegionPickSamplerGizmosDrawer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SamplerList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* VirtualSamplerList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSREGIONPICKSAMPLERGIZMOSDRAWER__CTOR_OFFSET))(this);
	}

	::System::Void DrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSREGIONPICKSAMPLERGIZMOSDRAWER_DRAWGIZMOS_OFFSET))(this);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSREGIONPICKSAMPLERGIZMOSDRAWER_ONDRAWGIZMOS_OFFSET))(this);
	}
};
