#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CHESSMODEFLOATTEXTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DFCA0)

inline static constexpr unsigned int ChessModeFloatTextContainer_TypeDefinitionIndex = 38074;

class ChessModeFloatTextContainer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHESSMODEFLOATTEXTCONTAINER__CTOR_OFFSET))(this);
	}
};
