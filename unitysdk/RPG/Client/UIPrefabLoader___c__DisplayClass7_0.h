#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"

class Class_1_321DAC1151B4F640;
class Class_1_9625D463385089F2;
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xA7292D0)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0xA729300)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA727BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass7_0_TypeDefinitionIndex = 59908;

	class UIPrefabLoader___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x18
		::Class_1_9625D463385089F2* viewCache; // 0x20
		::Class_1_321DAC1151B4F640* cacheEntry; // 0x28
		::RPG::Client::ViewCacheType cacheType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoadViewPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__0_OFFSET))(this, result);
		}

		::System::Void _AsyncLoadViewPrefab_b__1(::RPG::Client::UIPrefabLoader_LoadResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS7_0__ASYNCLOADVIEWPREFAB_B__1_OFFSET))(this, result);
		}
	};
}
