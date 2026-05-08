#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_51__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DCE150)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_51_TypeDefinitionIndex = 61131;

class Class_1_AAAED97E5F30E143_51 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_51_TypeDefinitionIndex)->GetStaticField(0x31730);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_51__CCTOR_OFFSET))();
	}
};
