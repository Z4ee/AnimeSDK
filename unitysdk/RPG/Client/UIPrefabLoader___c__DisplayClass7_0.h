#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

class Class_1_321DAC1151B4F640;
class Class_1_3A34A5229D2C5A1E;
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x18306E10)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0x18306E50)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18305430)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass7_0_TypeDefinitionIndex = 69747;

	class UIPrefabLoader___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x10
		::Class_1_3A34A5229D2C5A1E* viewCache; // 0x18
		::Class_1_321DAC1151B4F640* cacheEntry; // 0x20
		::System::String* path; // 0x28
		::RPG::Client::ViewCacheType cacheType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadViewPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET))(this, a1);
		}

		::System::Void _AsyncLoadViewPrefab_b__1(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET))(this, a1);
		}
	};
}
