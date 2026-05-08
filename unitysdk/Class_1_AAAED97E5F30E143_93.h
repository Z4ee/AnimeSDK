#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_93__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B7F470)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_93_TypeDefinitionIndex = 77545;

class Class_1_AAAED97E5F30E143_93 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_93_TypeDefinitionIndex)->GetStaticField(0x32D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_93__CCTOR_OFFSET))();
	}
};
