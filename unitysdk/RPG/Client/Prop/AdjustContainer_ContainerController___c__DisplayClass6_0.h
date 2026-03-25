#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerController; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA000FE0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0___REGENERATENOREUSE_B__0_OFFSET UNITYSDK_OFFSET(0xA002240)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0___REGENERATENOREUSE_B__1_OFFSET UNITYSDK_OFFSET(0xA002730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerController___c__DisplayClass6_0_TypeDefinitionIndex = 63648;

	class AdjustContainer_ContainerController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* controller; // 0x10
		::RPG::Client::Prop::AdjustContainer_ContainerController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __ReGenerateNoReUse_b__0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0___REGENERATENOREUSE_B__0_OFFSET))(this, go, data);
		}

		::System::Void __ReGenerateNoReUse_b__1(::UnityEngine::GameObject* oldGo, ::UnityEngine::GameObject* newGo, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS6_0___REGENERATENOREUSE_B__1_OFFSET))(this, oldGo, newGo, data);
		}
	};
}
