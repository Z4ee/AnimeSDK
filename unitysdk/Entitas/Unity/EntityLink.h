#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas { class IEntity; }
namespace System { class String; }

#define ENTITAS_UNITY_ENTITYLINK_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12C56BE0)
#define ENTITAS_UNITY_ENTITYLINK_LINK_OFFSET UNITYSDK_OFFSET(0x12C56BF0)
#define ENTITAS_UNITY_ENTITYLINK_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x12C56F30)
#define ENTITAS_UNITY_ENTITYLINK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C56E50)
#define ENTITAS_UNITY_ENTITYLINK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C56F40)
#define ENTITAS_UNITY_ENTITYLINK_UNLINK_OFFSET UNITYSDK_OFFSET(0x12C56D40)
#define ENTITAS_UNITY_ENTITYLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C56FB0)

namespace Entitas::Unity
{
	inline static constexpr unsigned int EntityLink_TypeDefinitionIndex = 9889;

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

		::System::Void Link(::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINK_LINK_OFFSET))(this, entity);
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
