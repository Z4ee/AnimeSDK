#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider2D; }

#define RPG_CLIENT_UICUSTOMCLICKAREA_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xE3966D0)
#define RPG_CLIENT_UICUSTOMCLICKAREA_METHOD_5_00C6190C0573D2A1_OFFSET UNITYSDK_OFFSET(0xE3967C0)
#define RPG_CLIENT_UICUSTOMCLICKAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xE3968A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UICustomClickArea_TypeDefinitionIndex = 72833;

	class UICustomClickArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider2D* IBJNKMEGPAP; // 0x18
		::UnityEngine::Vector3 GPCBCGCMOPI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider2D* Method_5_00C6190C0573D2A1()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCLICKAREA_METHOD_5_00C6190C0573D2A1_OFFSET))(this);
		}
	};
}
