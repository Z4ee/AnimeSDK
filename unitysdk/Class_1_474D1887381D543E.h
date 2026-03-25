#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_474D1887381D543E__CTOR_OFFSET UNITYSDK_OFFSET(0x168394B0)

inline static constexpr unsigned int Class_1_474D1887381D543E_TypeDefinitionIndex = 33713;

class Class_1_474D1887381D543E : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_474D1887381D543E__CTOR_OFFSET))(this);
	}
};
