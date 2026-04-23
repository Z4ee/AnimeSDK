#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtTcpMessageComponents_Component.h"
#include "unitysdk/Hdg/rdtTcpMessageGameObjects_Gob.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class RemoteDebugServer; }
namespace Hdg { class rdtTcpMessage; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C21DC0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8C1E6C0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x8C22060)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C1DFC0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x8C20250)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x8C20360)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x8C217A0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONSETARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x8C1F840)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATECOMPONENTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8C1E240)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATEGAMEOBJECTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8C1DE90)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C13B80)

namespace Hdg
{
	inline static constexpr unsigned int rdtMessageGameObjectsHandler_TypeDefinitionIndex = 43764;

	class rdtMessageGameObjectsHandler : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* m_unityComponents; // 0x10
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageGameObjects_Gob>* m_allGobs; // 0x18
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageComponents_Component>* m_components; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_gameObjects; // 0x28
		::Hdg::RemoteDebugServer* m_server; // 0x30
		::System::Boolean m_dontDestroyOnLoadBadObject; // 0x38

		::System::Void _ctor(::Hdg::RemoteDebugServer* server)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::RemoteDebugServer*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER__CTOR_OFFSET))(this, server);
		}

		::System::Void OnUpdateGameObjectProperties(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATEGAMEOBJECTPROPERTIES_OFFSET))(this, message);
		}

		::System::Void OnUpdateComponentProperties(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATECOMPONENTPROPERTIES_OFFSET))(this, message);
		}

		::System::Void OnSetArraySize(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONSETARRAYSIZE_OFFSET))(this, message);
		}

		::System::Void OnDeleteGameObjects(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONDELETEGAMEOBJECTS_OFFSET))(this, message);
		}

		::System::Void OnRequestGameObjectComponents(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTCOMPONENTS_OFFSET))(this, message);
		}

		::System::Void OnRequestGameObjects(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTS_OFFSET))(this, message);
		}

		::System::Void AddGameObject(::UnityEngine::GameObject* g, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageGameObjects_Gob>* list)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Hdg::rdtTcpMessageGameObjects_Gob>*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ADDGAMEOBJECT_OFFSET))(this, g, list);
		}

		::UnityEngine::GameObject* FindGameObject(::System::Int32 instanceId)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_OFFSET))(this, instanceId);
		}

		::UnityEngine::GameObject* FindGameObject_1(::System::Int32 instanceId, ::UnityEngine::GameObject* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_1_OFFSET))(this, instanceId, parent);
		}

		::UnityEngine::Component* FindComponent(::UnityEngine::GameObject* gob, ::System::Int32 instanceId)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDCOMPONENT_OFFSET))(this, gob, instanceId);
		}
	};
}
