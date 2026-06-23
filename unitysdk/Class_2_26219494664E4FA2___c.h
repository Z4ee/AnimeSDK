#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_26219494664E4FA2___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x187ACD00)
#define CLASS_2_26219494664E4FA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187ACCB0)
#define CLASS_2_26219494664E4FA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187ACCF0)

inline static constexpr unsigned int Class_2_26219494664E4FA2___c_TypeDefinitionIndex = 80141;

class Class_2_26219494664E4FA2___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_26219494664E4FA2___c_TypeDefinitionIndex)->GetStaticField(0x36900);
	}
	static ::Class_2_26219494664E4FA2___c** StaticGet___9()
	{
		return (::Class_2_26219494664E4FA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_26219494664E4FA2___c_TypeDefinitionIndex)->GetStaticField(0x36908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
