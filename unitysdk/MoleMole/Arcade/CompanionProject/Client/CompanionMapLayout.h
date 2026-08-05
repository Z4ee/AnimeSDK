#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameManifest.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FBB2840)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_DESTROYTEMPALTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FBB2B70)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FBB2830)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_INSTANTIATESELECTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1FBB2D60)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET UNITYSDK_OFFSET(0x1FBB28E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FBB2890)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB2EF0)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CompanionMapLayout_TypeDefinitionIndex = 94838;

	class CompanionMapLayout : public ::MoleMole::MiniGame::MiniGameManifest
	{
	public:
		static ::MoleMole::Arcade::CompanionProject::Client::CompanionMapLayout** StaticGet_Field_6_0()
		{
			return (::MoleMole::Arcade::CompanionProject::Client::CompanionMapLayout**)Il2CppClass::FromTypeDefinitionIndex(CompanionMapLayout_TypeDefinitionIndex)->GetStaticField(0x52650);
		}
		::UnityEngine::GameObject* template_; // 0x50
		::UnityEngine::GameObject* selectTemplate; // 0x58
		::UnityEngine::Transform* EffectRoot; // 0x60
		::UnityEngine::Transform* ObjectPoolRoot; // 0x68
		::UnityEngine::AnimationCurve* CollectItemCurve; // 0x70
		::UnityEngine::AnimationCurve* ShopCameraCurve; // 0x78
		::UnityEngine::AnimationCurve* ShopCpMergeCurve; // 0x80
		::System::Single DieEffectDuration; // 0x88
		::System::Single FlyDuration; // 0x8C
		::System::Single ShopCameraMoveDuration; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GoodsPoints; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* GoodsPointParents; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GoodsShadows; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MergePoints; // 0xB0
		::UnityEngine::Transform* TipsRoot; // 0xB8
		::UnityEngine::GameObject* TipsTemplate; // 0xC0
		::UnityEngine::AnimationCurve* TipsAnim; // 0xC8
		::System::Single TipsAnimDuration; // 0xD0
		::UnityEngine::AnimationCurve* TipsSPAnim; // 0xD8
		::System::Single TipsSPAnimDuration; // 0xE0
		::System::Single TipsAnimBaseScale; // 0xE4
		::UnityEngine::GameObject* BgSingle; // 0xE8
		::UnityEngine::GameObject* BgMp; // 0xF0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* _pool; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::CompanionProject::Client::CompanionMapLayout* get_Instance()
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CompanionMapLayout*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* InstantiateTemplate()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET))(this);
		}

		::System::Void DestroyTempalteObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_DESTROYTEMPALTEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* InstantiateSelectTemplate()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONMAPLAYOUT_INSTANTIATESELECTTEMPLATE_OFFSET))(this);
		}
	};
}
