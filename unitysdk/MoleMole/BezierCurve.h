#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A06B10C4DE479401;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BEZIERCURVE_AUTOSMOOTHALL_OFFSET UNITYSDK_OFFSET(0x122DD4B0)
#define MOLEMOLE_BEZIERCURVE_GETPOSITIONBYNORMALIZETIME_OFFSET UNITYSDK_OFFSET(0x122DD430)
#define MOLEMOLE_BEZIERCURVE_GET_MAXTIME_OFFSET UNITYSDK_OFFSET(0x122DD390)
#define MOLEMOLE_BEZIERCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x122DD530)

namespace MoleMole
{
	inline static constexpr unsigned int BezierCurve_TypeDefinitionIndex = 41308;

	class BezierCurve : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A06B10C4DE479401*>* points; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BEZIERCURVE__CTOR_OFFSET))(this);
		}

		::System::Single get_MaxTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BEZIERCURVE_GET_MAXTIME_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPositionByNormalizeTime(::System::Single timePercent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BEZIERCURVE_GETPOSITIONBYNORMALIZETIME_OFFSET))(this, timePercent);
		}

		::System::Void AutoSmoothAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BEZIERCURVE_AUTOSMOOTHALL_OFFSET))(this);
		}
	};
}
