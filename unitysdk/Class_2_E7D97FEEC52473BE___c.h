#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_E7D97FEEC52473BE___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x118B81D0)
#define CLASS_2_E7D97FEEC52473BE___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x118B81C0)
#define CLASS_2_E7D97FEEC52473BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118B8170)
#define CLASS_2_E7D97FEEC52473BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118B81B0)

inline static constexpr unsigned int Class_2_E7D97FEEC52473BE___c_TypeDefinitionIndex = 73562;

class Class_2_E7D97FEEC52473BE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7D97FEEC52473BE___c_TypeDefinitionIndex)->GetStaticField(0x34400);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7D97FEEC52473BE___c_TypeDefinitionIndex)->GetStaticField(0x34408);
	}
	static ::Class_2_E7D97FEEC52473BE___c** StaticGet___9()
	{
		return (::Class_2_E7D97FEEC52473BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7D97FEEC52473BE___c_TypeDefinitionIndex)->GetStaticField(0x34410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7D97FEEC52473BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D97FEEC52473BE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D97FEEC52473BE___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D97FEEC52473BE___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
