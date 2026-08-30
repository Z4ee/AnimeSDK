#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UICUSTOMCASTWITHHOLE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xE3579C0)
#define RPG_CLIENT_UICUSTOMCASTWITHHOLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE357C10)

namespace RPG::Client
{
	inline static constexpr unsigned int UICustomCastWithHole_TypeDefinitionIndex = 69047;

	class UICustomCastWithHole : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* HoleNodeList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCASTWITHHOLE__CTOR_OFFSET))(this);
		}

		::System::Boolean UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICUSTOMCASTWITHHOLE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}
	};
}
