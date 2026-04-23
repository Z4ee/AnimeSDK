#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_VIRTUALCURSORRECTCLAMPER_CLAMP_OFFSET UNITYSDK_OFFSET(0xB4BF7E0)
#define RPG_CLIENT_VIRTUALCURSORRECTCLAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BF7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorRectClamper_TypeDefinitionIndex = 67440;

	class VirtualCursorRectClamper : public ::System::Object
	{
	public:
		::UnityEngine::Rect _Bounds; // 0x10

		::System::Void _ctor(::UnityEngine::Rect bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRECTCLAMPER__CTOR_OFFSET))(this, bounds);
		}

		::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRECTCLAMPER_CLAMP_OFFSET))(this, pos);
		}
	};
}
