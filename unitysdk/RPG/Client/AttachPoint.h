#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ATTACHPOINT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0xB336BA0)
#define RPG_CLIENT_ATTACHPOINT_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xB336C50)
#define RPG_CLIENT_ATTACHPOINT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB336E20)
#define RPG_CLIENT_ATTACHPOINT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB336DE0)
#define RPG_CLIENT_ATTACHPOINT_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0xB336C00)
#define RPG_CLIENT_ATTACHPOINT_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xB336D20)
#define RPG_CLIENT_ATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB336EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachPoint_TypeDefinitionIndex = 63943;

	class AttachPoint : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Transform* PointTransform; // 0x18
		::System::String* BindPath; // 0x20
		::UnityEngine::Transform* DynamicBindTransform; // 0x28
		::System::Nullable_1<::UnityEngine::Vector3> PersistentLocalScale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsDynamic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_SET_ISDYNAMIC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_GET_LOCALSCALE_OFFSET))(this);
		}

		::System::Void set_LocalScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_SET_LOCALSCALE_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINT_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
