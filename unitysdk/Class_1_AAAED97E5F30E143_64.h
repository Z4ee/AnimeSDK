#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1342DB10)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_64_TypeDefinitionIndex = 71200;

class Class_1_AAAED97E5F30E143_64 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_64_TypeDefinitionIndex)->GetStaticField(0x3DA90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_64__CCTOR_OFFSET))();
	}
};
