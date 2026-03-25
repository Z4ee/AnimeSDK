#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_1782F263438830D6__CTOR_OFFSET UNITYSDK_OFFSET(0x8D45D50)

inline static constexpr unsigned int Class_1_1782F263438830D6_TypeDefinitionIndex = 58379;

class Class_1_1782F263438830D6 : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1782F263438830D6__CTOR_OFFSET))(this);
	}
};
