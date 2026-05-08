#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_59__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C92C80)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_59_TypeDefinitionIndex = 63395;

class Class_1_AAAED97E5F30E143_59 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_59_TypeDefinitionIndex)->GetStaticField(0x472C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_59__CCTOR_OFFSET))();
	}
};
