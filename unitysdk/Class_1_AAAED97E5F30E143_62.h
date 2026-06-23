#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_62__CCTOR_OFFSET UNITYSDK_OFFSET(0x153D61C0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_62_TypeDefinitionIndex = 68429;

class Class_1_AAAED97E5F30E143_62 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_62_TypeDefinitionIndex)->GetStaticField(0x4BA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_62__CCTOR_OFFSET))();
	}
};
