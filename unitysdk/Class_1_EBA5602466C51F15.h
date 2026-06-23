#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_759B11C4DA11AF47.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EBA5602466C51F15__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A64760)

inline static constexpr unsigned int Class_1_EBA5602466C51F15_TypeDefinitionIndex = 85750;

class Class_1_EBA5602466C51F15 : public ::System::Object
{
public:
	static ::Il2CppArray<::Struct_2_759B11C4DA11AF47>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Struct_2_759B11C4DA11AF47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBA5602466C51F15_TypeDefinitionIndex)->GetStaticField(0x34C40);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBA5602466C51F15_TypeDefinitionIndex)->GetStaticField(0xCF00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBA5602466C51F15__CCTOR_OFFSET))();
	}
};
