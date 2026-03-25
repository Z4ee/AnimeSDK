#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CLASS_1_63C450F2FF228316__CTOR_OFFSET UNITYSDK_OFFSET(0x1098BB20)

inline static constexpr unsigned int Class_1_63C450F2FF228316_TypeDefinitionIndex = 48478;

class Class_1_63C450F2FF228316 : public ::System::Object
{
public:
	::UnityEngine::Rect Field_1_0; // 0x10
	::UnityEngine::Color Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63C450F2FF228316__CTOR_OFFSET))(this);
	}
};
