#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6F76F88C4505EE18_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C355590)
#define CLASS_1_6F76F88C4505EE18__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3555E0)

inline static constexpr unsigned int Class_1_6F76F88C4505EE18_TypeDefinitionIndex = 40513;

class Class_1_6F76F88C4505EE18 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* FBEBNLOPIBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F76F88C4505EE18__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F76F88C4505EE18_CLEAR_OFFSET))(this);
	}
};
