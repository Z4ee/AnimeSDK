#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD885910)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD885960)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD885AE0)
#define RPG_CLIENT_MONOPOLYCHOOSEDIRECTIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD885D60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyChooseDirectionController_TypeDefinitionIndex = 72758;

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
