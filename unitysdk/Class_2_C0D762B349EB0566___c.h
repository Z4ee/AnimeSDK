#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BD954AEAE8F1A57B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C0D762B349EB0566___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x12267EB0)
#define CLASS_2_C0D762B349EB0566___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12267E60)
#define CLASS_2_C0D762B349EB0566___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12267EA0)

inline static constexpr unsigned int Class_2_C0D762B349EB0566___c_TypeDefinitionIndex = 64187;

class Class_2_C0D762B349EB0566___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_BD954AEAE8F1A57B*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_3_BD954AEAE8F1A57B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0D762B349EB0566___c_TypeDefinitionIndex)->GetStaticField(0x477A0);
	}
	static ::Class_2_C0D762B349EB0566___c** StaticGet___9()
	{
		return (::Class_2_C0D762B349EB0566___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0D762B349EB0566___c_TypeDefinitionIndex)->GetStaticField(0x477A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_BD954AEAE8F1A57B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*))((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
