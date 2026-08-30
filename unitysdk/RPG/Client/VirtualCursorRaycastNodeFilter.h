#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1C8164B0)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_CLEARNODES_OFFSET UNITYSDK_OFFSET(0x1C8165D0)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1C816560)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_RPG_CLIENT_IVIRTUALCURSORRAYCASTFILTER_ISRAYCASTVALID_OFFSET UNITYSDK_OFFSET(0x1C814DA0)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_START_OFFSET UNITYSDK_OFFSET(0x1C816640)
#define RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C816750)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorRaycastNodeFilter_TypeDefinitionIndex = 73145;

	class VirtualCursorRaycastNodeFilter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _AllowRaycastNodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean RPG_Client_IVirtualCursorRaycastFilter_IsRaycastValid(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_RPG_CLIENT_IVIRTUALCURSORRAYCASTFILTER_ISRAYCASTVALID_OFFSET))(this, a1);
		}

		::System::Void AddNode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_ADDNODE_OFFSET))(this, a1);
		}

		::System::Void RemoveNode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_REMOVENODE_OFFSET))(this, a1);
		}

		::System::Void ClearNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_CLEARNODES_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRAYCASTNODEFILTER_START_OFFSET))(this);
		}
	};
}
