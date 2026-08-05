#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_18;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C0D762B349EB0566___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x15C132E0)
#define CLASS_2_C0D762B349EB0566___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C13290)
#define CLASS_2_C0D762B349EB0566___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C132D0)

inline static constexpr unsigned int Class_2_C0D762B349EB0566___c_TypeDefinitionIndex = 81444;

class Class_2_C0D762B349EB0566___c : public ::System::Object
{
public:
	static ::Class_2_C0D762B349EB0566___c** StaticGet___9()
	{
		return (::Class_2_C0D762B349EB0566___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0D762B349EB0566___c_TypeDefinitionIndex)->GetStaticField(0x3C260);
	}
	static ::System::Func_2<::Class_3_AE02BC8285203464_18*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_3_AE02BC8285203464_18*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0D762B349EB0566___c_TypeDefinitionIndex)->GetStaticField(0x3C268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_AE02BC8285203464_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_18*))((::PBYTE)hIl2Cpp + CLASS_2_C0D762B349EB0566___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
