#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AAAED97E5F30E143_91__CCTOR_OFFSET UNITYSDK_OFFSET(0x111D70E0)

inline static constexpr unsigned int Class_1_AAAED97E5F30E143_91_TypeDefinitionIndex = 77473;

class Class_1_AAAED97E5F30E143_91 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAAED97E5F30E143_91_TypeDefinitionIndex)->GetStaticField(0x45270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAAED97E5F30E143_91__CCTOR_OFFSET))();
	}
};
