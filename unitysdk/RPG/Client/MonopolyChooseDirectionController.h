#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC166BB0)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xC166C00)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC166D50)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC166FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyChooseDirectionController_TypeDefinitionIndex = 68043;

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

		::System::Void Init(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_INIT_OFFSET))(this, a1);
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
