#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5__CTOR_OFFSET UNITYSDK_OFFSET(0x191D1000)

inline static constexpr unsigned int Class_1_83665B095F1535B5_TypeDefinitionIndex = 10468;

class Class_1_83665B095F1535B5 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_TypeDefinitionIndex)->GetStaticField(0x14330);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5__CTOR_OFFSET))(this);
	}
};
