#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PathCreation { class BezierPath; }
namespace PathCreation { class GlobalDisplaySettings; }
namespace PathCreation { class PathCreatorData; }
namespace PathCreation { class VertexPath; }
namespace System { class Action; }

#define PATHCREATION_PATHCREATOR_ADD_PATHUPDATED_OFFSET UNITYSDK_OFFSET(0x1EEB0A10)
#define PATHCREATION_PATHCREATOR_GET_BEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1EEB4160)
#define PATHCREATION_PATHCREATOR_GET_EDITORDATA_OFFSET UNITYSDK_OFFSET(0x1EEB4640)
#define PATHCREATION_PATHCREATOR_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1EEB0CF0)
#define PATHCREATION_PATHCREATOR_INITIALIZEEDITORDATA_OFFSET UNITYSDK_OFFSET(0x1EEB3ED0)
#define PATHCREATION_PATHCREATOR_REMOVE_PATHUPDATED_OFFSET UNITYSDK_OFFSET(0x1EEB3E50)
#define PATHCREATION_PATHCREATOR_SET_BEZIERPATH_OFFSET UNITYSDK_OFFSET(0x1EEB07B0)
#define PATHCREATION_PATHCREATOR_TRIGGERPATHUPDATE_OFFSET UNITYSDK_OFFSET(0x1EEB4650)
#define PATHCREATION_PATHCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB4660)

namespace PathCreation
{
	inline static constexpr unsigned int PathCreator_TypeDefinitionIndex = 38109;

	class PathCreator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* pathUpdated; // 0x18
		::PathCreation::PathCreatorData* editorData; // 0x20
		::System::Boolean initialized; // 0x28
		::PathCreation::GlobalDisplaySettings* globalEditorDisplaySettings; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void add_pathUpdated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_ADD_PATHUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_pathUpdated(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_REMOVE_PATHUPDATED_OFFSET))(this, value);
		}

		::PathCreation::VertexPath* get_path()
		{
			return ((::PathCreation::VertexPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_GET_PATH_OFFSET))(this);
		}

		::PathCreation::BezierPath* get_bezierPath()
		{
			return ((::PathCreation::BezierPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_GET_BEZIERPATH_OFFSET))(this);
		}

		::System::Void set_bezierPath(::PathCreation::BezierPath* value)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath*))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_SET_BEZIERPATH_OFFSET))(this, value);
		}

		::System::Void InitializeEditorData(::System::Boolean in2DMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_INITIALIZEEDITORDATA_OFFSET))(this, in2DMode);
		}

		::PathCreation::PathCreatorData* get_EditorData()
		{
			return ((::PathCreation::PathCreatorData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_GET_EDITORDATA_OFFSET))(this);
		}

		::System::Void TriggerPathUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_PATHCREATOR_TRIGGERPATHUPDATE_OFFSET))(this);
		}
	};
}
