#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_51079C385211CF04___C_METHOD_1_D0F4FB9A661FE191_OFFSET UNITYSDK_OFFSET(0x11DDBFB0)
#define CLASS_3_51079C385211CF04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DDBF60)
#define CLASS_3_51079C385211CF04___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DDBFA0)

inline static constexpr unsigned int Class_3_51079C385211CF04___c_TypeDefinitionIndex = 53947;

class Class_3_51079C385211CF04___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x43CA0);
	}
	static ::Class_3_51079C385211CF04___c** StaticGet___9()
	{
		return (::Class_3_51079C385211CF04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x43CA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D0F4FB9A661FE191(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C_METHOD_1_D0F4FB9A661FE191_OFFSET))(this, a1);
	}
};
