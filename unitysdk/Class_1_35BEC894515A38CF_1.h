#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_35BEC894515A38CF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15625D90)

inline static constexpr unsigned int Class_1_35BEC894515A38CF_1_TypeDefinitionIndex = 80710;

class Class_1_35BEC894515A38CF_1 : public ::System::Object
{
public:
	::UnityEngine::Vector2 GBMEGAKLFAJ; // 0x10
	::System::Boolean DHHGLHOOCMA; // 0x18
	::System::Single FOENFEKANLO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35BEC894515A38CF_1__CTOR_OFFSET))(this);
	}
};
