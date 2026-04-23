#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAA99C30)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xAA99C80)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAA99DE0)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9A060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyChooseDirectionController_TypeDefinitionIndex = 67100;

	class MonopolyChooseDirectionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PlayerRef; // 0x18
		::UnityEngine::RectTransform* _Rect; // 0x20
		::UnityEngine::RectTransform* _SelfRect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* playerRef)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_INIT_OFFSET))(this, playerRef);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
