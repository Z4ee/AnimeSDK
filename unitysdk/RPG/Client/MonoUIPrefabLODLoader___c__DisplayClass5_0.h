#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoUIPrefabLODLoader; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOUIPREFABLODLOADER___C__DISPLAYCLASS5_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xAA104F0)
#define RPG_CLIENT_MONOUIPREFABLODLOADER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA103A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIPrefabLODLoader___c__DisplayClass5_0_TypeDefinitionIndex = 63587;

	class MonoUIPrefabLODLoader___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x10
		::RPG::Client::MonoUIPrefabLODLoader* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncLoad_b__0(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIPREFABLODLOADER___C__DISPLAYCLASS5_0__ASYNCLOAD_B__0_OFFSET))(this, go);
		}
	};
}
