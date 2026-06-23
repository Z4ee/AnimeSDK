#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FDAAF0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_32_TypeDefinitionIndex = 57063;

class Class_1_AAAED97E5F30E143_32 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_32_TypeDefinitionIndex)->GetStaticField(0x458E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_32__CCTOR_OFFSET))();
	}
};
