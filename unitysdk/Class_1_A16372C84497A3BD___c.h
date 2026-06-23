#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_4.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A16372C84497A3BD___C_METHOD_1_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x1CCF0F50)
#define CLASS_1_A16372C84497A3BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0F00)
#define CLASS_1_A16372C84497A3BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0F40)

inline static constexpr unsigned int Class_1_A16372C84497A3BD___c_TypeDefinitionIndex = 88220;

class Class_1_A16372C84497A3BD___c : public ::System::Object
{
public:
	static ::Class_1_A16372C84497A3BD___c** StaticGet___9()
	{
		return (::Class_1_A16372C84497A3BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A16372C84497A3BD___c_TypeDefinitionIndex)->GetStaticField(0x4DDA0);
	}
	static ::System::Func_2<::Struct_2_A725E4562D03EA4E_4, ::System::Int32>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::Struct_2_A725E4562D03EA4E_4, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A16372C84497A3BD___c_TypeDefinitionIndex)->GetStaticField(0x4DDA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A16372C84497A3BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A16372C84497A3BD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_0D3CEA11284B35A1(::Struct_2_A725E4562D03EA4E_4 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_A725E4562D03EA4E_4))((::PBYTE)hIl2Cpp + CLASS_1_A16372C84497A3BD___C_METHOD_1_0D3CEA11284B35A1_OFFSET))(this, a1);
	}
};
