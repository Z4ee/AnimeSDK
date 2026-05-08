#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HOLLOWINFOPROGRESSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC7CA0)

inline static constexpr unsigned int HollowInfoProgressParam_TypeDefinitionIndex = 43036;

class HollowInfoProgressParam : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color Reward1Color1; // 0x18
	::UnityEngine::Color Reward1Color2; // 0x28
	::UnityEngine::Color Reward2Color1; // 0x38
	::UnityEngine::Color Reward2Color2; // 0x48
	::UnityEngine::Color Reward3Color1; // 0x58
	::UnityEngine::Color Reward3Color2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLLOWINFOPROGRESSPARAM__CTOR_OFFSET))(this);
	}
};
