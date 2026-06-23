#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9A68100BEBB7EAF5;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x14A62710)
#define CLASS_3_4609359B80F29981___C_METHOD_1_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x14A62730)
#define CLASS_3_4609359B80F29981___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A626C0)
#define CLASS_3_4609359B80F29981___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A62700)

inline static constexpr unsigned int Class_3_4609359B80F29981___c_TypeDefinitionIndex = 47824;

class Class_3_4609359B80F29981___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_9A68100BEBB7EAF5*, ::System::Boolean>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::Class_3_9A68100BEBB7EAF5*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x3E080);
	}
	static ::System::Func_2<::Class_3_9A68100BEBB7EAF5*, ::System::Boolean>** StaticGet___9__26_1()
	{
		return (::System::Func_2<::Class_3_9A68100BEBB7EAF5*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x3E088);
	}
	static ::Class_3_4609359B80F29981___c** StaticGet___9()
	{
		return (::Class_3_4609359B80F29981___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x3E090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_9A68100BEBB7EAF5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9A68100BEBB7EAF5*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A57F29F28168952(::Class_3_9A68100BEBB7EAF5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_9A68100BEBB7EAF5*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_9A57F29F28168952_OFFSET))(this, a1);
	}
};
