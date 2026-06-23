#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C_METHOD_1_7513083F4512A7E2_OFFSET UNITYSDK_OFFSET(0x16392E50)
#define CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16392E00)
#define CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16392E40)

inline static constexpr unsigned int Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c_TypeDefinitionIndex = 52935;

class Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c : public ::System::Object
{
public:
	static ::Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c** StaticGet___9()
	{
		return (::Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c_TypeDefinitionIndex)->GetStaticField(0x41FD0);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C6E6D4C23C40AB4_Class_1_CDFE5168166DD73A___c_TypeDefinitionIndex)->GetStaticField(0x41FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7513083F4512A7E2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C6E6D4C23C40AB4_CLASS_1_CDFE5168166DD73A___C_METHOD_1_7513083F4512A7E2_OFFSET))(this, a1);
	}
};
