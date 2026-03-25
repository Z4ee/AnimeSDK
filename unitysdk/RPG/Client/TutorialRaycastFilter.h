#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define RPG_CLIENT_TUTORIALRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xA6464E0)
#define RPG_CLIENT_TUTORIALRAYCASTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA646630)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialRaycastFilter_TypeDefinitionIndex = 56395;

	class TutorialRaycastFilter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}
	};
}
