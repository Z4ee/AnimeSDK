#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_45__CCTOR_OFFSET UNITYSDK_OFFSET(0x13057D00)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_45_TypeDefinitionIndex = 59969;

class Class_1_AAAED97E5F30E143_45 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_45_TypeDefinitionIndex)->GetStaticField(0x3B290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_45__CCTOR_OFFSET))();
	}
};
