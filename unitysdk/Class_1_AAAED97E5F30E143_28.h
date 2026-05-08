#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x1021C7A0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_28_TypeDefinitionIndex = 51502;

class Class_1_AAAED97E5F30E143_28 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_28_TypeDefinitionIndex)->GetStaticField(0x3DBD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_28__CCTOR_OFFSET))();
	}
};
