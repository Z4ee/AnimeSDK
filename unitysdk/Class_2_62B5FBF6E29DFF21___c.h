#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B49021EF593C9D7_Class_3_487EE6B302AC50B7;
class Class_5_BC1D3EB9C882EB28;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_62B5FBF6E29DFF21___C_METHOD_1_5F2E18B3F9B4DFE0_OFFSET UNITYSDK_OFFSET(0x12B040A0)
#define CLASS_2_62B5FBF6E29DFF21___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B04050)
#define CLASS_2_62B5FBF6E29DFF21___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B04090)

inline static constexpr unsigned int Class_2_62B5FBF6E29DFF21___c_TypeDefinitionIndex = 82643;

class Class_2_62B5FBF6E29DFF21___c : public ::System::Object
{
public:
	static ::Class_2_62B5FBF6E29DFF21___c** StaticGet___9()
	{
		return (::Class_2_62B5FBF6E29DFF21___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_62B5FBF6E29DFF21___c_TypeDefinitionIndex)->GetStaticField(0x2B840);
	}
	static ::System::Func_2<::Class_1_0B49021EF593C9D7_Class_3_487EE6B302AC50B7*, ::Class_5_BC1D3EB9C882EB28*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_1_0B49021EF593C9D7_Class_3_487EE6B302AC50B7*, ::Class_5_BC1D3EB9C882EB28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_62B5FBF6E29DFF21___c_TypeDefinitionIndex)->GetStaticField(0x2B848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_62B5FBF6E29DFF21___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62B5FBF6E29DFF21___C__CTOR_OFFSET))(this);
	}

	::Class_5_BC1D3EB9C882EB28* Method_1_5F2E18B3F9B4DFE0(::Class_1_0B49021EF593C9D7_Class_3_487EE6B302AC50B7* a1)
	{
		return ((::Class_5_BC1D3EB9C882EB28*(*)(::PVOID, ::Class_1_0B49021EF593C9D7_Class_3_487EE6B302AC50B7*))((::PBYTE)hIl2Cpp + CLASS_2_62B5FBF6E29DFF21___C_METHOD_1_5F2E18B3F9B4DFE0_OFFSET))(this, a1);
	}
};
