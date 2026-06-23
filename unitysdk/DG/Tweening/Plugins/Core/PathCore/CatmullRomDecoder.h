#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ABSPathDecoder.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ControlPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Plugins::Core::PathCore { class Path; }

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_FINALIZEPATH_OFFSET UNITYSDK_OFFSET(0x1E7E39E0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1E7E44E0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_SETTIMETOLENGTHTABLES_OFFSET UNITYSDK_OFFSET(0x1E7E3CD0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_SETWAYPOINTSLENGTHS_OFFSET UNITYSDK_OFFSET(0x1E7E3FA0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E4840)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int CatmullRomDecoder_TypeDefinitionIndex = 27973;

	class CatmullRomDecoder : public ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER__CTOR_OFFSET))(this);
		}

		::System::Void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::Il2CppArray<::UnityEngine::Vector3>* wps, ::System::Boolean isClosedPath)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_FINALIZEPATH_OFFSET))(this, p, wps, isClosedPath);
		}

		::UnityEngine::Vector3 GetPoint(::System::Single perc, ::Il2CppArray<::UnityEngine::Vector3>* wps, ::DG::Tweening::Plugins::Core::PathCore::Path* p, ::Il2CppArray<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::Il2CppArray<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_GETPOINT_OFFSET))(this, perc, wps, p, controlPoints);
		}

		::System::Void SetTimeToLengthTables(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::System::Int32 subdivisions)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_SETTIMETOLENGTHTABLES_OFFSET))(this, p, subdivisions);
		}

		::System::Void SetWaypointsLengths(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::System::Int32 subdivisions)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_CATMULLROMDECODER_SETWAYPOINTSLENGTHS_OFFSET))(this, p, subdivisions);
		}
	};
}
