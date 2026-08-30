#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class PolygonCollider2D; }

#define RPG_CLIENT_BASECUSTOMCOLLIDER_METHOD_5_59DCF204E71C8F21_OFFSET UNITYSDK_OFFSET(0x19F0E250)
#define RPG_CLIENT_BASECUSTOMCOLLIDER_METHOD_5_890064904909C587_OFFSET UNITYSDK_OFFSET(0x19F0E370)
#define RPG_CLIENT_BASECUSTOMCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0E490)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseCustomCollider_TypeDefinitionIndex = 68865;

	class BaseCustomCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshCollider* BACKGGIMDIO; // 0x18
		::UnityEngine::PolygonCollider2D* AKDDGKMEKGO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshCollider* Method_5_59DCF204E71C8F21()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER_METHOD_5_59DCF204E71C8F21_OFFSET))(this);
		}

		::UnityEngine::PolygonCollider2D* Method_5_890064904909C587()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER_METHOD_5_890064904909C587_OFFSET))(this);
		}
	};
}
