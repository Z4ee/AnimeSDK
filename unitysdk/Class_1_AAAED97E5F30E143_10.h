#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DC8FC0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_10_TypeDefinitionIndex = 45893;

class Class_1_AAAED97E5F30E143_10 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_10_TypeDefinitionIndex)->GetStaticField(0x41C20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_10__CCTOR_OFFSET))();
	}
};
