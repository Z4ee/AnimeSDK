#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_92716080D9218E0F___C_METHOD_1_485D29AB08B5A758_OFFSET UNITYSDK_OFFSET(0x130847B0)
#define CLASS_1_92716080D9218E0F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13084760)
#define CLASS_1_92716080D9218E0F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130847A0)

inline static constexpr unsigned int Class_1_92716080D9218E0F___c_TypeDefinitionIndex = 76869;

class Class_1_92716080D9218E0F___c : public ::System::Object
{
public:
	static ::Class_1_92716080D9218E0F___c** StaticGet___9()
	{
		return (::Class_1_92716080D9218E0F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F___c_TypeDefinitionIndex)->GetStaticField(0x304B0);
	}
	static ::System::Comparison_1<::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F___c_TypeDefinitionIndex)->GetStaticField(0x304B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_485D29AB08B5A758(::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087 a1, ::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087, ::Class_1_92716080D9218E0F_Struct_2_C66AA39BF19D4087))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F___C_METHOD_1_485D29AB08B5A758_OFFSET))(this, a1, a2);
	}
};
