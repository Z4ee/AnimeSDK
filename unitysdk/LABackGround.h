#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define LABACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x10232750)

inline static constexpr unsigned int LABackGround_TypeDefinitionIndex = 56341;

class LABackGround : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABACKGROUND__CTOR_OFFSET))(this);
	}
};
