#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4C22E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C2320)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C___REGENERATENOREUSE_B__11_2_OFFSET UNITYSDK_OFFSET(0xC4C2330)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerInstance___c_TypeDefinitionIndex = 72714;

	class AdjustContainer_ContainerInstance___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::AdjustContainer_ContainerInstance___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::AdjustContainer_ContainerInstance___c**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_ContainerInstance___c_TypeDefinitionIndex)->GetStaticField(0x105B0);
		}
		static ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>** StaticGet___9__11_2()
		{
			return (::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_ContainerInstance___c_TypeDefinitionIndex)->GetStaticField(0x105B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ReGenerateNoReUse_b__11_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C___REGENERATENOREUSE_B__11_2_OFFSET))(this, a1, a2);
		}
	};
}
