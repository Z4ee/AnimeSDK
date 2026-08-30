#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_NODEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD87AB50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_NodeItem_TypeDefinitionIndex = 68941;

	class MonoUIColorSwitcher_NodeItem : public ::System::Object
	{
	public:
		::UnityEngine::Object* Component; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_NODEITEM__CTOR_OFFSET))(this);
		}
	};
}
