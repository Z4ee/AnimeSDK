#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8824AE577469A784_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C906590)
#define CLASS_1_8824AE577469A784__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9068D0)

inline static constexpr unsigned int Class_1_8824AE577469A784_TypeDefinitionIndex = 43359;

class Class_1_8824AE577469A784 : public ::System::Object
{
public:
	::Struct_2_52A902145F5BE513 OEIBHLMDJKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8824AE577469A784__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8824AE577469A784_CLEAR_OFFSET))(this);
	}
};
