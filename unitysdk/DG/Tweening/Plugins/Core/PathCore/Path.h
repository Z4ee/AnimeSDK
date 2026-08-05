#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/PathType.h"
#include "unitysdk/DG/Tweening/Plugins/Core/PathCore/ControlPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening::Plugins::Core::PathCore { class ABSPathDecoder; }
namespace DG::Tweening::Plugins::Core::PathCore { class CatmullRomDecoder; }
namespace DG::Tweening::Plugins::Core::PathCore { class LinearDecoder; }

#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_ASSIGNDECODER_OFFSET UNITYSDK_OFFSET(0x1F6A02D0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_ASSIGNWAYPOINTS_OFFSET UNITYSDK_OFFSET(0x1F6A01D0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_CLONEINCREMENTAL_OFFSET UNITYSDK_OFFSET(0x1F6A0CB0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_CONVERTTOCONSTANTPATHPERC_OFFSET UNITYSDK_OFFSET(0x1F6A06B0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F6A0BA0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DRAW_1_OFFSET UNITYSDK_OFFSET(0x1F6A11A0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DRAW_OFFSET UNITYSDK_OFFSET(0x1F6A1190)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_FINALIZEPATH_OFFSET UNITYSDK_OFFSET(0x1F6A0390)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETDRAWPOINTS_OFFSET UNITYSDK_OFFSET(0x1F6A08B0)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1F6A0630)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETWAYPOINTINDEXFROMPERC_OFFSET UNITYSDK_OFFSET(0x1F6A0820)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_REFRESHNONLINEARDRAWWPS_OFFSET UNITYSDK_OFFSET(0x1F6A0A50)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A0370)
#define DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F69FFD0)

namespace DG::Tweening::Plugins::Core::PathCore
{
	inline static constexpr unsigned int Path_TypeDefinitionIndex = 28579;

	class Path : public ::System::Object
	{
	public:
		static ::DG::Tweening::Plugins::Core::PathCore::LinearDecoder** StaticGet__linearDecoder()
		{
			return (::DG::Tweening::Plugins::Core::PathCore::LinearDecoder**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x24220);
		}
		static ::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder** StaticGet__catmullRomDecoder()
		{
			return (::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x24228);
		}
		::Il2CppArray<::System::Single>* wpLengths; // 0x10
		::DG::Tweening::PathType type; // 0x18
		::System::Int32 subdivisionsXSegment; // 0x1C
		::System::Int32 subdivisions; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* wps; // 0x28
		::Il2CppArray<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints; // 0x30
		::System::Single length; // 0x38
		::System::Boolean isFinalized; // 0x3C
		::Il2CppArray<::System::Single>* timesTable; // 0x40
		::Il2CppArray<::System::Single>* lengthsTable; // 0x48
		::System::Int32 linearWPIndex; // 0x50
		::DG::Tweening::Plugins::Core::PathCore::Path* _incrementalClone; // 0x58
		::System::Int32 _incrementalIndex; // 0x60
		::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* _decoder; // 0x68
		::System::Boolean _changed; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* nonLinearDrawWps; // 0x78
		::UnityEngine::Vector3 targetPosition; // 0x80
		::System::Nullable_1<::UnityEngine::Vector3> lookAtPosition; // 0x8C
		::UnityEngine::Color gizmoColor; // 0x9C

		::System::Void _ctor(::DG::Tweening::PathType type, ::Il2CppArray<::UnityEngine::Vector3>* waypoints, ::System::Int32 subdivisionsXSegment, ::System::Nullable_1<::UnityEngine::Color> gizmoColor)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::PathType, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH__CTOR_OFFSET))(this, type, waypoints, subdivisionsXSegment, gizmoColor);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH__CTOR_1_OFFSET))(this);
		}

		::System::Void FinalizePath(::System::Boolean isClosedPath, ::DG::Tweening::AxisConstraint lockPositionAxes, ::UnityEngine::Vector3 currTargetVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DG::Tweening::AxisConstraint, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_FINALIZEPATH_OFFSET))(this, isClosedPath, lockPositionAxes, currTargetVal);
		}

		::UnityEngine::Vector3 GetPoint(::System::Single perc, ::System::Boolean convertToConstantPerc)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETPOINT_OFFSET))(this, perc, convertToConstantPerc);
		}

		::System::Single ConvertToConstantPathPerc(::System::Single perc)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_CONVERTTOCONSTANTPATHPERC_OFFSET))(this, perc);
		}

		::System::Int32 GetWaypointIndexFromPerc(::System::Single perc, ::System::Boolean isMovingForward)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETWAYPOINTINDEXFROMPERC_OFFSET))(this, perc, isMovingForward);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetDrawPoints(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::System::Int32 drawSubdivisionsXSegment)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_GETDRAWPOINTS_OFFSET))(p, drawSubdivisionsXSegment);
		}

		static ::System::Void RefreshNonLinearDrawWps(::DG::Tweening::Plugins::Core::PathCore::Path* p)
		{
			return ((::System::Void(*)(::DG::Tweening::Plugins::Core::PathCore::Path*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_REFRESHNONLINEARDRAWWPS_OFFSET))(p);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DESTROY_OFFSET))(this);
		}

		::DG::Tweening::Plugins::Core::PathCore::Path* CloneIncremental(::System::Int32 loopIncrement)
		{
			return ((::DG::Tweening::Plugins::Core::PathCore::Path*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_CLONEINCREMENTAL_OFFSET))(this, loopIncrement);
		}

		::System::Void AssignWaypoints(::Il2CppArray<::UnityEngine::Vector3>* newWps, ::System::Boolean cloneWps)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_ASSIGNWAYPOINTS_OFFSET))(this, newWps, cloneWps);
		}

		::System::Void AssignDecoder(::DG::Tweening::PathType pathType)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::PathType))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_ASSIGNDECODER_OFFSET))(this, pathType);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DRAW_OFFSET))(this);
		}

		static ::System::Void Draw_1(::DG::Tweening::Plugins::Core::PathCore::Path* p)
		{
			return ((::System::Void(*)(::DG::Tweening::Plugins::Core::PathCore::Path*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PATHCORE_PATH_DRAW_1_OFFSET))(p);
		}
	};
}
