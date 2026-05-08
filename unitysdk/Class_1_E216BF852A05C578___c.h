#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F8EB4D9464ADCCA1;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E216BF852A05C578___C_METHOD_1_302D18EE1CA1801A_OFFSET UNITYSDK_OFFSET(0xEA6C320)
#define CLASS_1_E216BF852A05C578___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA6C2D0)
#define CLASS_1_E216BF852A05C578___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6C310)

inline static constexpr unsigned int Class_1_E216BF852A05C578___c_TypeDefinitionIndex = 50919;

class Class_1_E216BF852A05C578___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_F8EB4D9464ADCCA1*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_2_F8EB4D9464ADCCA1*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E216BF852A05C578___c_TypeDefinitionIndex)->GetStaticField(0x3B000);
	}
	static ::Class_1_E216BF852A05C578___c** StaticGet___9()
	{
		return (::Class_1_E216BF852A05C578___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E216BF852A05C578___c_TypeDefinitionIndex)->GetStaticField(0x3B008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_302D18EE1CA1801A(::Class_2_F8EB4D9464ADCCA1* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + CLASS_1_E216BF852A05C578___C_METHOD_1_302D18EE1CA1801A_OFFSET))(this, a1);
	}
};
