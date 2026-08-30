#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTDECORATELINECONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x11679CD0)
#define RPG_CLIENT_MONOEFFECTDECORATELINECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1167A030)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectDecorateLineControl_TypeDefinitionIndex = 70695;

	class MonoEffectDecorateLineControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::UnityEngine::GameObject* TargetCamera; // 0x20
		::System::Single minPostition; // 0x28
		::System::Single maxPosition; // 0x2C
		::System::Single minLineWidth; // 0x30
		::System::Single maxLineWidth; // 0x34
		::Il2CppArray<::UnityEngine::GameObject*>* destination; // 0x38
		::Il2CppArray<::System::Single>* destinationFadeoutRange; // 0x40
		::System::Int32 showDestinations; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDECORATELINECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDECORATELINECONTROL_UPDATE_OFFSET))(this);
		}
	};
}
