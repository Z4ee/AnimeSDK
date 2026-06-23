#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_FCAF801AC482D3B5;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_51079C385211CF04___C_METHOD_1_D0F4FB9A661FE191_OFFSET UNITYSDK_OFFSET(0x108C1230)
#define CLASS_3_51079C385211CF04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x108C11E0)
#define CLASS_3_51079C385211CF04___C__CTOR_OFFSET UNITYSDK_OFFSET(0x108C1220)

inline static constexpr unsigned int Class_3_51079C385211CF04___c_TypeDefinitionIndex = 86822;

class Class_3_51079C385211CF04___c : public ::System::Object
{
public:
	static ::Class_3_51079C385211CF04___c** StaticGet___9()
	{
		return (::Class_3_51079C385211CF04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x3CDB0);
	}
	static ::System::Func_2<::Class_5_FCAF801AC482D3B5*, ::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::Class_5_FCAF801AC482D3B5*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_51079C385211CF04___c_TypeDefinitionIndex)->GetStaticField(0x3CDB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D0F4FB9A661FE191(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_3_51079C385211CF04___C_METHOD_1_D0F4FB9A661FE191_OFFSET))(this, a1);
	}
};
