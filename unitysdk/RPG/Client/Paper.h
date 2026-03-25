#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PAPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC8DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Paper_TypeDefinitionIndex = 58200;

	class Paper : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Front; // 0x10
		::UnityEngine::GameObject* Back; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAPER__CTOR_OFFSET))(this);
		}
	};
}
