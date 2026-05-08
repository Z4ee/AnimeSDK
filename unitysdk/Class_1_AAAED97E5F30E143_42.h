#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_42__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D07AD0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_42_TypeDefinitionIndex = 57538;

class Class_1_AAAED97E5F30E143_42 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_42_TypeDefinitionIndex)->GetStaticField(0x36FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_42__CCTOR_OFFSET))();
	}
};
