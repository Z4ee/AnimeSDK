#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19447E10)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_2_TypeDefinitionIndex = 40492;

class Class_1_AAAED97E5F30E143_2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_2_TypeDefinitionIndex)->GetStaticField(0x3BCE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_2__CCTOR_OFFSET))();
	}
};
