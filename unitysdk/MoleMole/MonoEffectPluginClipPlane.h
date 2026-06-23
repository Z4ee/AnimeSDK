#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE_GETFOLLOWTARGET2_OFFSET UNITYSDK_OFFSET(0x19152A10)
#define MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE_GETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x191528A0)
#define MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x19152A50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginClipPlane_TypeDefinitionIndex = 46314;

	class MonoEffectPluginClipPlane : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean NeedCheckFollowTargetActiveState; // 0x18
		::UnityEngine::Transform* FollowTarget; // 0x20
		::UnityEngine::Transform* FollowTarget2; // 0x28
		::System::String* MaterialPropertyModifierKey; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* MaterialFilters; // 0x38
		::System::Boolean OnlyFirstFrame; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ParticleSystemsToClipPlane; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE_GETFOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFollowTarget2()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINCLIPPLANE_GETFOLLOWTARGET2_OFFSET))(this);
		}
	};
}
