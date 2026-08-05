#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_759B11C4DA11AF47.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F64F47AB8F8221C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x12816860)

inline static constexpr unsigned int Class_1_F64F47AB8F8221C2_TypeDefinitionIndex = 76185;

class Class_1_F64F47AB8F8221C2 : public ::System::Object
{
public:
	static ::Il2CppArray<::Struct_2_759B11C4DA11AF47>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Struct_2_759B11C4DA11AF47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F64F47AB8F8221C2_TypeDefinitionIndex)->GetStaticField(0x4F6B0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F64F47AB8F8221C2_TypeDefinitionIndex)->GetStaticField(0x125A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F64F47AB8F8221C2__CCTOR_OFFSET))();
	}
};
