#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PathCreation { class BezierPath; }
namespace PathCreation { class VertexPath; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_PATHCREATORDATA_ADD_BEZIERCREATED_OFFSET UNITYSDK_OFFSET(0x1DABF630)
#define PATHCREATION_PATHCREATORDATA_ADD_BEZIERORVERTEXPATHMODIFIED_OFFSET UNITYSDK_OFFSET(0x1DABF380)
#define PATHCREATION_PATHCREATORDATA_BEZIERPATHEDITED_OFFSET UNITYSDK_OFFSET(0x1DABFA10)
#define PATHCREATION_PATHCREATORDATA_CREATEBEZIER_OFFSET UNITYSDK_OFFSET(0x1DABF730)
#define PATHCREATION_PATHCREATORDATA_GETVERTEXPATH_OFFSET UNITYSDK_OFFSET(0x1DABF020)
#define PATHCREATION_PATHCREATORDATA_GET_BEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1DABF960)
#define PATHCREATION_PATHCREATORDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DABF400)
#define PATHCREATION_PATHCREATORDATA_PATHMODIFIEDBYUNDO_OFFSET UNITYSDK_OFFSET(0x1DABF9F0)
#define PATHCREATION_PATHCREATORDATA_PATHTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1DABF9C0)
#define PATHCREATION_PATHCREATORDATA_REMOVE_BEZIERCREATED_OFFSET UNITYSDK_OFFSET(0x1DABF6B0)
#define PATHCREATION_PATHCREATORDATA_REMOVE_BEZIERORVERTEXPATHMODIFIED_OFFSET UNITYSDK_OFFSET(0x1DABF300)
#define PATHCREATION_PATHCREATORDATA_RESETBEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1DABF930)
#define PATHCREATION_PATHCREATORDATA_SET_BEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1DABF120)
#define PATHCREATION_PATHCREATORDATA_VERTEXPATHSETTINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x1DABF9D0)
#define PATHCREATION_PATHCREATORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF2D0)

namespace PathCreation
{
	inline static constexpr unsigned int PathCreatorData_TypeDefinitionIndex = 37449;

	class PathCreatorData : public ::System::Object
	{
	public:
		::System::Action* bezierOrVertexPathModified; // 0x10
		::System::Action* bezierCreated; // 0x18
		::PathCreation::BezierPath* _bezierPath; // 0x20
		::PathCreation::VertexPath* _vertexPath; // 0x28
		::System::Boolean vertexPathUpToDate; // 0x30
		::System::Single vertexPathMaxAngleError; // 0x34
		::System::Single vertexPathMinVertexSpacing; // 0x38
		::System::Boolean showTransformTool; // 0x3C
		::System::Boolean showPathBounds; // 0x3D
		::System::Boolean showPerSegmentBounds; // 0x3E
		::System::Boolean displayAnchorPoints; // 0x3F
		::System::Boolean displayControlPoints; // 0x40
		::System::Single bezierHandleScale; // 0x44
		::System::Boolean globalDisplaySettingsFoldout; // 0x48
		::System::Boolean keepConstantHandleSize; // 0x49
		::System::Boolean showNormalsInVertexMode; // 0x4A
		::System::Boolean showBezierPathInVertexMode; // 0x4B
		::System::Boolean showDisplayOptions; // 0x4C
		::System::Boolean showPathOptions; // 0x4D
		::System::Boolean showVertexPathDisplayOptions; // 0x4E
		::System::Boolean showVertexPathOptions; // 0x4F
		::System::Boolean showNormals; // 0x50
		::System::Boolean showNormalsHelpInfo; // 0x51
		::System::Int32 tabIndex; // 0x54
		::System::Boolean isSphere; // 0x58
		::System::Single sphereRadius; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA__CTOR_OFFSET))(this);
		}

		::System::Void add_bezierOrVertexPathModified(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_ADD_BEZIERORVERTEXPATHMODIFIED_OFFSET))(this, value);
		}

		::System::Void remove_bezierOrVertexPathModified(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_REMOVE_BEZIERORVERTEXPATHMODIFIED_OFFSET))(this, value);
		}

		::System::Void add_bezierCreated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_ADD_BEZIERCREATED_OFFSET))(this, value);
		}

		::System::Void remove_bezierCreated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_REMOVE_BEZIERCREATED_OFFSET))(this, value);
		}

		::System::Void Initialize(::System::Boolean defaultIs2D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_INITIALIZE_OFFSET))(this, defaultIs2D);
		}

		::System::Void ResetBezierPath(::UnityEngine::Vector3 centre, ::System::Boolean defaultIs2D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_RESETBEZIERPATH_OFFSET))(this, centre, defaultIs2D);
		}

		::System::Void CreateBezier(::UnityEngine::Vector3 centre, ::System::Boolean defaultIs2D, ::System::Boolean isSphere)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_CREATEBEZIER_OFFSET))(this, centre, defaultIs2D, isSphere);
		}

		::PathCreation::BezierPath* get_bezierPath()
		{
			return ((::PathCreation::BezierPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_GET_BEZIERPATH_OFFSET))(this);
		}

		::System::Void set_bezierPath(::PathCreation::BezierPath* value)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_SET_BEZIERPATH_OFFSET))(this, value);
		}

		::PathCreation::VertexPath* GetVertexPath(::UnityEngine::Transform* transform)
		{
			return ((::PathCreation::VertexPath*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_GETVERTEXPATH_OFFSET))(this, transform);
		}

		::System::Void PathTransformed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_PATHTRANSFORMED_OFFSET))(this);
		}

		::System::Void VertexPathSettingsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_VERTEXPATHSETTINGSCHANGED_OFFSET))(this);
		}

		::System::Void PathModifiedByUndo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_PATHMODIFIEDBYUNDO_OFFSET))(this);
		}

		::System::Void BezierPathEdited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATORDATA_BEZIERPATHEDITED_OFFSET))(this);
		}
	};
}
