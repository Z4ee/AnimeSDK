#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }

#define RPG_CLIENT_NODEINDEXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xABD6FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int NodeIndexItem_TypeDefinitionIndex = 66808;

	class NodeIndexItem : public ::System::Object
	{
	public:
		::UnityEngine::Component* mComponent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEINDEXITEM__CTOR_OFFSET))(this);
		}
	};
}
