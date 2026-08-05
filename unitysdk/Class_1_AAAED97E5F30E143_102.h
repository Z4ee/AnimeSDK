#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_102__CCTOR_OFFSET UNITYSDK_OFFSET(0x128DC330)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_102_TypeDefinitionIndex = 88745;

class Class_1_AAAED97E5F30E143_102 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_102_TypeDefinitionIndex)->GetStaticField(0x31A70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_102__CCTOR_OFFSET))();
	}
};
