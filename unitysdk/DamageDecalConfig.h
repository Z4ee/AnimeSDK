#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Texture2D; }

#define DAMAGEDECALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6D330)

inline static constexpr unsigned int DamageDecalConfig_TypeDefinitionIndex = 29455;

class DamageDecalConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 effectIndex; // 0x18
	::System::Single width; // 0x1C
	::System::Single height; // 0x20
	::System::Single depth; // 0x24
	::System::Single lifetime; // 0x28
	::UnityEngine::Color damageColor; // 0x2C
	::UnityEngine::Texture2D* damageTexture; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEDECALCONFIG__CTOR_OFFSET))(this);
	}
};
