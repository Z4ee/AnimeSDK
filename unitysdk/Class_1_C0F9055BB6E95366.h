#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CLASS_1_C0F9055BB6E95366__CTOR_OFFSET UNITYSDK_OFFSET(0x17F97850)

inline static constexpr unsigned int Class_1_C0F9055BB6E95366_TypeDefinitionIndex = 39128;

class Class_1_C0F9055BB6E95366 : public ::System::Object
{
public:
	::UnityEngine::Bounds Field_1_0; // 0x10
	::UnityEngine::Bounds Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F9055BB6E95366__CTOR_OFFSET))(this);
	}
};
