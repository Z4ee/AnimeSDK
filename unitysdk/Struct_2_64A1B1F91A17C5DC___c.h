#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB;

#define STRUCT_2_64A1B1F91A17C5DC___C_METHOD_1_96878E0074222561_OFFSET UNITYSDK_OFFSET(0x156E28D0)
#define STRUCT_2_64A1B1F91A17C5DC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E2880)
#define STRUCT_2_64A1B1F91A17C5DC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156E28C0)

inline static constexpr unsigned int Struct_2_64A1B1F91A17C5DC___c_TypeDefinitionIndex = 83597;

class Struct_2_64A1B1F91A17C5DC___c : public ::System::Object
{
public:
	static ::Struct_2_64A1B1F91A17C5DC___c** StaticGet___9()
	{
		return (::Struct_2_64A1B1F91A17C5DC___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_64A1B1F91A17C5DC___c_TypeDefinitionIndex)->GetStaticField(0x31510);
	}
	static ::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB** StaticGet___9__3_0()
	{
		return (::Class_1_912E0458D58825D3_Class_3_E5F5430D92070BCB**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_64A1B1F91A17C5DC___c_TypeDefinitionIndex)->GetStaticField(0x31518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96878E0074222561(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + STRUCT_2_64A1B1F91A17C5DC___C_METHOD_1_96878E0074222561_OFFSET))(this, a1, a2, a3);
	}
};
