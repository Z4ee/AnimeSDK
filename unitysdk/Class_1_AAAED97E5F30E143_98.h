#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_98__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AB6260)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_98_TypeDefinitionIndex = 82803;

class Class_1_AAAED97E5F30E143_98 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_98_TypeDefinitionIndex)->GetStaticField(0x41540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_98__CCTOR_OFFSET))();
	}
};
