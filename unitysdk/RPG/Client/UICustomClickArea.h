#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class PolygonCollider2D; }

#define RPG_CLIENT_UICUSTOMCLICKAREA_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xB3E2860)
#define RPG_CLIENT_UICUSTOMCLICKAREA_METHOD_5_1A98FB043EC9FF2A_OFFSET UNITYSDK_OFFSET(0xB3E2950)
#define RPG_CLIENT_UICUSTOMCLICKAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E2A30)

namespace RPG::Client
{
	inline static constexpr unsigned int UICustomClickArea_TypeDefinitionIndex = 67092;

	class UICustomClickArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::PolygonCollider2D* Field_5_0; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::PolygonCollider2D* Method_5_1A98FB043EC9FF2A()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA_METHOD_5_1A98FB043EC9FF2A_OFFSET))(this);
		}
	};
}
