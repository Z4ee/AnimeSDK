#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCUSTOMROTATEITEM_TICK_OFFSET UNITYSDK_OFFSET(0x19E41C20)
#define RPG_CLIENT_MONOCUSTOMROTATEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E41DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCustomRotateItem_TypeDefinitionIndex = 68741;

	class MonoCustomRotateItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::System::Single rotateSpeed; // 0x20
		::UnityEngine::Vector2 rotateTimeRange; // 0x24
		::System::Single BCGHNNBGMCM; // 0x2C
		::UnityEngine::Vector3 NOKOFCBMICO; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCUSTOMROTATEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCUSTOMROTATEITEM_TICK_OFFSET))(this, a1);
		}
	};
}
