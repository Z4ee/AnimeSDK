#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_VIRTUALCURSORROUNDCLAMPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1C816840)
#define RPG_CLIENT_VIRTUALCURSORROUNDCLAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C816830)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorRoundClamper_TypeDefinitionIndex = 73144;

	class VirtualCursorRoundClamper : public ::System::Object
	{
	public:
		::System::Single _Radius; // 0x10
		::UnityEngine::Vector2 _Center; // 0x14

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORROUNDCLAMPER__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSORROUNDCLAMPER_CLAMP_OFFSET))(this, a1);
		}
	};
}
