#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_852D049BCF25E480_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5436A0)

inline static constexpr unsigned int Class_1_852D049BCF25E480_1_TypeDefinitionIndex = 47201;

class Class_1_852D049BCF25E480_1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_852D049BCF25E480_1_TypeDefinitionIndex)->GetStaticField(0x40E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_852D049BCF25E480_1__CCTOR_OFFSET))();
	}
};
