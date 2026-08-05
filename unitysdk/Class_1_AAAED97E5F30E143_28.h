#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x186FC550)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_28_TypeDefinitionIndex = 50070;

class Class_1_AAAED97E5F30E143_28 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_28_TypeDefinitionIndex)->GetStaticField(0x3B620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_28__CCTOR_OFFSET))();
	}
};
