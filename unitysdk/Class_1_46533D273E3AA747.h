#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46533D273E3AA747__CTOR_OFFSET UNITYSDK_OFFSET(0x191F1750)

inline static constexpr unsigned int Class_1_46533D273E3AA747_TypeDefinitionIndex = 9058;

class Class_1_46533D273E3AA747 : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_1_0()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_46533D273E3AA747_TypeDefinitionIndex)->GetStaticField(0xFD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46533D273E3AA747__CTOR_OFFSET))(this);
	}
};
