#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client { class UIPrefabLoader_LoadResult; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3A8D20)
#define RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS16_0___ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE3A9320)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass16_0_TypeDefinitionIndex = 73003;

	class UIPrefabLoader___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* __4__this; // 0x10
		::System::Action_1<::RPG::Client::UIPrefabLoader_LoadResult*>* callback; // 0x18
		::System::Boolean autoRelease; // 0x20
		::System::Boolean autoReturnCache; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __AsyncLoadPrefab_b__0(::RPG::Client::UIPrefabLoader_LoadResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader_LoadResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPREFABLOADER___C__DISPLAYCLASS16_0___ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
		}
	};
}
