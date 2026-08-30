#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define DAMAGETEXTSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1602FE20)

inline static constexpr unsigned int DamageTextStyle_TypeDefinitionIndex = 48029;

class DamageTextStyle : public ::UnityEngine::ScriptableObject
{
public:
	::System::Boolean EnableFade; // 0x18
	::UnityEngine::Color Color; // 0x1C
	::UnityEngine::Color OutlineColor; // 0x2C
	::UnityEngine::Color Outline1Color; // 0x3C
	::UnityEngine::Color BottomColor; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTSTYLE__CTOR_OFFSET))(this);
	}
};
