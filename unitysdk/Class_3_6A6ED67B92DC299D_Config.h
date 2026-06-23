#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_6A6ED67B92DC299D_Config_Enum_3_87C06F9B74C70B08.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_3_6A6ED67B92DC299D_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13771830)

inline static constexpr unsigned int Class_3_6A6ED67B92DC299D_Config_TypeDefinitionIndex = 83512;

class Class_3_6A6ED67B92DC299D_Config : public ::System::Object
{
public:
	::Class_3_6A6ED67B92DC299D_Config_Enum_3_87C06F9B74C70B08 mode; // 0x10
	::UnityEngine::Vector2 yAngleRange; // 0x14
	::UnityEngine::Vector2 forceRange; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A6ED67B92DC299D_CONFIG__CTOR_OFFSET))(this);
	}
};
