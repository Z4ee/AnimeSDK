#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_85__CCTOR_OFFSET UNITYSDK_OFFSET(0x14907370)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_85_TypeDefinitionIndex = 80902;

class Class_1_AAAED97E5F30E143_85 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_85_TypeDefinitionIndex)->GetStaticField(0x4F0A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_85__CCTOR_OFFSET))();
	}
};
