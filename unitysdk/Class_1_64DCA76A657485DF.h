#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_64DCA76A657485DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B84280)

inline static constexpr unsigned int Class_1_64DCA76A657485DF_TypeDefinitionIndex = 67489;

class Class_1_64DCA76A657485DF : public ::System::Object
{
public:
	static ::Il2CppArray<::Struct_2_B136CFD8FB6B8F37_3>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::Struct_2_B136CFD8FB6B8F37_3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64DCA76A657485DF_TypeDefinitionIndex)->GetStaticField(0x50460);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_64DCA76A657485DF_TypeDefinitionIndex)->GetStaticField(0x12740);
	}
	// static const ::System::Int32 Field_1_0 = 0x100; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64DCA76A657485DF__CCTOR_OFFSET))();
	}
};
