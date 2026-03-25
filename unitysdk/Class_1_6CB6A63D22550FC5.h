#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_6CB6A63D22550FC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1173B210)

inline static constexpr unsigned int Class_1_6CB6A63D22550FC5_TypeDefinitionIndex = 38257;

class Class_1_6CB6A63D22550FC5 : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB6A63D22550FC5__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
