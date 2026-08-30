#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas { class IEntity; }
namespace System { class String; }

#define ENTITAS_UNITY_ENTITYLINK_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x16537700)
#define ENTITAS_UNITY_ENTITYLINK_LINK_OFFSET UNITYSDK_OFFSET(0x16537710)
#define ENTITAS_UNITY_ENTITYLINK_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x16537B60)
#define ENTITAS_UNITY_ENTITYLINK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16537A10)
#define ENTITAS_UNITY_ENTITYLINK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16537B70)
#define ENTITAS_UNITY_ENTITYLINK_UNLINK_OFFSET UNITYSDK_OFFSET(0x165378B0)
#define ENTITAS_UNITY_ENTITYLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x16537BE0)

namespace Entitas::Unity
{
	inline static constexpr unsigned int EntityLink_TypeDefinitionIndex = 10009;

	class EntityLink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Entitas::IEntity* _entity; // 0x18
		::System::Boolean _applicationIsQuitting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK__CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* get_entity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_GET_ENTITY_OFFSET))(this);
		}

		::System::Void Link(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_LINK_OFFSET))(this, a1);
		}

		::System::Void Unlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_UNLINK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_TOSTRING_OFFSET))(this);
		}
	};
}
