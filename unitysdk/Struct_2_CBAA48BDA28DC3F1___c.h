#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB;

#define STRUCT_2_CBAA48BDA28DC3F1___C_METHOD_1_96878E0074222561_OFFSET UNITYSDK_OFFSET(0x1A1530E0)
#define STRUCT_2_CBAA48BDA28DC3F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A153090)
#define STRUCT_2_CBAA48BDA28DC3F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1530D0)

inline static constexpr unsigned int Struct_2_CBAA48BDA28DC3F1___c_TypeDefinitionIndex = 63987;

class Struct_2_CBAA48BDA28DC3F1___c : public ::System::Object
{
public:
	static ::Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB** StaticGet___9__3_0()
	{
		return (::Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CBAA48BDA28DC3F1___c_TypeDefinitionIndex)->GetStaticField(0x44E50);
	}
	static ::Struct_2_CBAA48BDA28DC3F1___c** StaticGet___9()
	{
		return (::Struct_2_CBAA48BDA28DC3F1___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CBAA48BDA28DC3F1___c_TypeDefinitionIndex)->GetStaticField(0x44E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96878E0074222561(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_CBAA48BDA28DC3F1___C_METHOD_1_96878E0074222561_OFFSET))(this, a1, a2, a3);
	}
};
