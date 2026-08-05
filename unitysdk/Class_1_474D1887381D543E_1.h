#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_474D1887381D543E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD6C30)

inline static constexpr unsigned int Class_1_474D1887381D543E_1_TypeDefinitionIndex = 76896;

class Class_1_474D1887381D543E_1 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_474D1887381D543E_1__CTOR_OFFSET))(this);
	}
};
