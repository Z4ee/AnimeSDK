#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class BinaryPrefabAsset; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183069B0)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0___ASYNCLOADPREFABIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x18306C80)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0___ASYNCLOADPREFABIMPL_B__1_OFFSET UNITYSDK_OFFSET(0x18306D00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass17_0_TypeDefinitionIndex = 69745;

	class UIPrefabLoader___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* parent; // 0x10
		::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* callback; // 0x18
		::UnityEngine::GameObject* gameObject; // 0x20
		::System::Boolean active; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __AsyncLoadPrefabImpl_b__0(::UnityEngine::BinaryPrefabAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BinaryPrefabAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0___ASYNCLOADPREFABIMPL_B__0_OFFSET))(this, a1);
		}

		::System::Void __AsyncLoadPrefabImpl_b__1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS17_0___ASYNCLOADPREFABIMPL_B__1_OFFSET))(this, a1);
		}
	};
}
