#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PathCreation { class PathCreator; }
namespace PathCreation { class VertexPath; }
namespace System { class Action; }

#define PATHCREATION_EXAMPLES_PATHSCENETOOL_ADD_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1EEB1180)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1EEB1280)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EEB12B0)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL_PATHUPDATED_OFFSET UNITYSDK_OFFSET(0x1EEB12C0)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL_REMOVE_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1EEB1200)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL_TRIGGERUPDATE_OFFSET UNITYSDK_OFFSET(0x1EEB12A0)
#define PATHCREATION_EXAMPLES_PATHSCENETOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB1130)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathSceneTool_TypeDefinitionIndex = 38126;

	class PathSceneTool : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* onDestroyed; // 0x18
		::PathCreation::PathCreator* pathCreator; // 0x20
		::System::Boolean autoUpdate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL__CTOR_OFFSET))(this);
		}

		::System::Void add_onDestroyed(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_ADD_ONDESTROYED_OFFSET))(this, value);
		}

		::System::Void remove_onDestroyed(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_REMOVE_ONDESTROYED_OFFSET))(this, value);
		}

		::PathCreation::VertexPath* get_path()
		{
			return ((::PathCreation::VertexPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_GET_PATH_OFFSET))(this);
		}

		::System::Void TriggerUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_TRIGGERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_ONDESTROY_OFFSET))(this);
		}

		::System::Void PathUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSCENETOOL_PATHUPDATED_OFFSET))(this);
		}
	};
}
