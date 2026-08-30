#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_917011F650CA881D_Class_1_449A5BE32B671549;

#define CLASS_1_917011F650CA881D__CTOR_OFFSET UNITYSDK_OFFSET(0x157ADC20)

inline static constexpr unsigned int Class_1_917011F650CA881D_TypeDefinitionIndex = 67776;

class Class_1_917011F650CA881D : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_917011F650CA881D_Class_1_449A5BE32B671549*>* DataList; // 0x10
	::System::UInt32 DataVersion; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917011F650CA881D__CTOR_OFFSET))(this);
	}
};
