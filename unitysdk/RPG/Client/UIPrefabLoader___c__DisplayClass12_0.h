#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xB42D740)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB42CB10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass12_0_TypeDefinitionIndex = 67302;

	class UIPrefabLoader___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS12_0__ASYNCLOADPREFAB_B__0_OFFSET))(this, result);
		}
	};
}
