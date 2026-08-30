#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGTOOLS_EFFECTEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8029A0)

namespace RPGTools
{
	inline static constexpr unsigned int EffectEditor_TypeDefinitionIndex = 48235;

	class EffectEditor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_EFFECTEDITOR__CTOR_OFFSET))(this);
		}
	};
}
