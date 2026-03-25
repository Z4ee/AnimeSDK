#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_MONOEFFECTLINERENDERERCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C7F0B0)
#define RPG_CLIENT_MONOEFFECTLINERENDERERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7F220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectLineRendererControl_TypeDefinitionIndex = 56005;

	class MonoEffectLineRendererControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::LineRenderer* Line; // 0x18
		::UnityEngine::GameObject* SourceObj; // 0x20
		::UnityEngine::GameObject* TargetObj; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLINERENDERERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLINERENDERERCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
