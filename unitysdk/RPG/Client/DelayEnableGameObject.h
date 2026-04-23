#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DELAYENABLEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F8D50)

namespace RPG::Client
{
	inline static constexpr unsigned int DelayEnableGameObject_TypeDefinitionIndex = 64578;

	class DelayEnableGameObject : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GO; // 0x10
		::System::Single DelayTime; // 0x18
		::System::Boolean Done; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DELAYENABLEGAMEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
