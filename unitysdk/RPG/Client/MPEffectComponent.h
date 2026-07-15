#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MPEFFECTCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15BFE220)
#define RPG_CLIENT_MPEFFECTCOMPONENT_PLAYDECREASEEFFECT_OFFSET UNITYSDK_OFFSET(0x15BFE750)
#define RPG_CLIENT_MPEFFECTCOMPONENT_PLAYINCREASEEFFECT_OFFSET UNITYSDK_OFFSET(0x15BFE3E0)
#define RPG_CLIENT_MPEFFECTCOMPONENT_SYNCLOADRESOURCETO_OFFSET UNITYSDK_OFFSET(0x15BFE920)
#define RPG_CLIENT_MPEFFECTCOMPONENT_TRYADDEFFECT_OFFSET UNITYSDK_OFFSET(0x15BFE5B0)
#define RPG_CLIENT_MPEFFECTCOMPONENT_UNLOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x15BFE270)
#define RPG_CLIENT_MPEFFECTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFEB00)

namespace RPG::Client
{
	inline static constexpr unsigned int MPEffectComponent_TypeDefinitionIndex = 69289;

	class MPEffectComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _IncreasePrefabPath; // 0x0
		// static const ::System::String* _DecreasePrefabPath; // 0x0
		// static const ::System::String* _IncreasePrefabName; // 0x0
		// static const ::System::String* _DecreasePrefabName; // 0x0
		// static const ::System::String* _MpAnimName; // 0x0
		::System::String* _Path; // 0x18
		::System::Boolean _IsIncreaseAttached; // 0x20
		::System::Boolean _IsDecreaseAttached; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _PathToAssetRef; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void PlayIncreaseEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_PLAYINCREASEEFFECT_OFFSET))(this);
		}

		::System::Void PlayDecreaseEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_PLAYDECREASEEFFECT_OFFSET))(this);
		}

		::System::Void TryAddEffect(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_TRYADDEFFECT_OFFSET))(this, a1);
		}

		::System::Void SyncLoadResourceTo(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_SYNCLOADRESOURCETO_OFFSET))(this, a1, a2);
		}

		::System::Void UnloadResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MPEFFECTCOMPONENT_UNLOADRESOURCES_OFFSET))(this);
		}
	};
}
