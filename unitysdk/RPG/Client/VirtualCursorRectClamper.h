#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_VIRTUALCURSORRECTCLAMPER_CLAMP_OFFSET UNITYSDK_OFFSET(0xE412290)
#define RPG_CLIENT_VIRTUALCURSORRECTCLAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0xE40E690)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorRectClamper_TypeDefinitionIndex = 73144;

	class VirtualCursorRectClamper : public ::System::Object
	{
	public:
		::UnityEngine::Rect _Bounds; // 0x10

		::System::Void _ctor(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRECTCLAMPER__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORRECTCLAMPER_CLAMP_OFFSET))(this, a1);
		}
	};
}
