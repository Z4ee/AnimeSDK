#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ABSPathDecoder.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ControlPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Plugins::Core::PathCore { class Path; }

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_FINALIZEPATH_OFFSET UNITYSDK_OFFSET(0x1C54C190)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1C54C4B0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_SETTIMETOLENGTHTABLES_OFFSET UNITYSDK_OFFSET(0x1C54C1D0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_SETWAYPOINTSLENGTHS_OFFSET UNITYSDK_OFFSET(0x1C54C6E0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54C6F0)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int LinearDecoder_TypeDefinitionIndex = 25483;

	class LinearDecoder : public ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER__CTOR_OFFSET))(this);
		}

		::System::Void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::Il2CppArray<::UnityEngine::Vector3>* wps, ::System::Boolean isClosedPath)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_FINALIZEPATH_OFFSET))(this, p, wps, isClosedPath);
		}

		::UnityEngine::Vector3 GetPoint(::System::Single perc, ::Il2CppArray<::UnityEngine::Vector3>* wps, ::DG::Tweening::Plugins::Core::PathCore::Path* p, ::Il2CppArray<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::Il2CppArray<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_GETPOINT_OFFSET))(this, perc, wps, p, controlPoints);
		}

		::System::Void SetTimeToLengthTables(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::System::Int32 subdivisions)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_SETTIMETOLENGTHTABLES_OFFSET))(this, p, subdivisions);
		}

		::System::Void SetWaypointsLengths(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::System::Int32 subdivisions)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_LINEARDECODER_SETWAYPOINTSLENGTHS_OFFSET))(this, p, subdivisions);
		}
	};
}
