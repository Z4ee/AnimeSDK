#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_1C775D1A5A638660;
class Class_5_F638703ACD0FA08E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_1A6B6D67A11FC971___C_METHOD_1_C7F44248C2BF2357_OFFSET UNITYSDK_OFFSET(0x1410BD80)
#define CLASS_3_1A6B6D67A11FC971___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1410BD30)
#define CLASS_3_1A6B6D67A11FC971___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1410BD70)

inline static constexpr unsigned int Class_3_1A6B6D67A11FC971___c_TypeDefinitionIndex = 39822;

class Class_3_1A6B6D67A11FC971___c : public ::System::Object
{
public:
	static ::Class_3_1A6B6D67A11FC971___c** StaticGet___9()
	{
		return (::Class_3_1A6B6D67A11FC971___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A6B6D67A11FC971___c_TypeDefinitionIndex)->GetStaticField(0x3D7E0);
	}
	static ::System::Action_2<::Class_5_F638703ACD0FA08E*, ::Class_5_1C775D1A5A638660*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_5_F638703ACD0FA08E*, ::Class_5_1C775D1A5A638660*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1A6B6D67A11FC971___c_TypeDefinitionIndex)->GetStaticField(0x3D7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A6B6D67A11FC971___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A6B6D67A11FC971___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7F44248C2BF2357(::Class_5_F638703ACD0FA08E* a1, ::Class_5_1C775D1A5A638660* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*, ::Class_5_1C775D1A5A638660*))((::PBYTE)hIl2Cpp + CLASS_3_1A6B6D67A11FC971___C_METHOD_1_C7F44248C2BF2357_OFFSET))(this, a1, a2);
	}
};
