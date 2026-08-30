#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B1C1CCEF5791333;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C58399FF0AF9177E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FCFD20)
#define CLASS_1_C58399FF0AF9177E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FCFD60)
#define CLASS_1_C58399FF0AF9177E___C__GET_STATUSTEXT_B__10_0_OFFSET UNITYSDK_OFFSET(0x18FCFD70)
#define CLASS_1_C58399FF0AF9177E___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0x18FCFDB0)

inline static constexpr unsigned int Class_1_C58399FF0AF9177E___c_TypeDefinitionIndex = 73369;

class Class_1_C58399FF0AF9177E___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::String*>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C58399FF0AF9177E___c_TypeDefinitionIndex)->GetStaticField(0x65FA0);
	}
	static ::Class_1_C58399FF0AF9177E___c** StaticGet___9()
	{
		return (::Class_1_C58399FF0AF9177E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C58399FF0AF9177E___c_TypeDefinitionIndex)->GetStaticField(0x65FA8);
	}
	static ::System::Func_2<::Class_1_1B1C1CCEF5791333*, ::System::Boolean>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_1_1B1C1CCEF5791333*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C58399FF0AF9177E___c_TypeDefinitionIndex)->GetStaticField(0x65FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E___C__CTOR_OFFSET))(this);
	}

	::System::String* _get_StatusText_b__10_0(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E___C__GET_STATUSTEXT_B__10_0_OFFSET))(this, a1);
	}

	::System::Boolean __ctor_b__17_0(::Class_1_1B1C1CCEF5791333* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B1C1CCEF5791333*))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E___C___CTOR_B__17_0_OFFSET))(this, a1);
	}
};
