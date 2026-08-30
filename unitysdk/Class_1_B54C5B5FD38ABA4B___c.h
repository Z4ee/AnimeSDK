#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9321AE14385DF74D.h"
#include "unitysdk/System/Object.h"

class Class_1_B54C5B5FD38ABA4B;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_B54C5B5FD38ABA4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1951FC20)
#define CLASS_1_B54C5B5FD38ABA4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1951FC50)
#define CLASS_1_B54C5B5FD38ABA4B___C___INITPOINTCONTROLCONTEXT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1951FC60)
#define CLASS_1_B54C5B5FD38ABA4B___C___PROCESSLINETRACEONVISIBLECHANGEDCLOSURE_B__27_0_OFFSET UNITYSDK_OFFSET(0x1951FCC0)

inline static constexpr unsigned int Class_1_B54C5B5FD38ABA4B___c_TypeDefinitionIndex = 76691;

class Class_1_B54C5B5FD38ABA4B___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_B54C5B5FD38ABA4B*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::Class_1_B54C5B5FD38ABA4B*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B54C5B5FD38ABA4B___c_TypeDefinitionIndex)->GetStaticField(0x65960);
	}
	static ::System::Comparison_1<::Struct_2_9321AE14385DF74D>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Struct_2_9321AE14385DF74D>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B54C5B5FD38ABA4B___c_TypeDefinitionIndex)->GetStaticField(0x65968);
	}
	static ::Class_1_B54C5B5FD38ABA4B___c** StaticGet___9()
	{
		return (::Class_1_B54C5B5FD38ABA4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B54C5B5FD38ABA4B___c_TypeDefinitionIndex)->GetStaticField(0x65970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B54C5B5FD38ABA4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B54C5B5FD38ABA4B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __InitPointControlContext_b__7_0(::Struct_2_9321AE14385DF74D a1, ::Struct_2_9321AE14385DF74D a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_9321AE14385DF74D, ::Struct_2_9321AE14385DF74D))((::PBYTE)hIl2Cpp + CLASS_1_B54C5B5FD38ABA4B___C___INITPOINTCONTROLCONTEXT_B__7_0_OFFSET))(this, a1, a2);
	}

	::System::Void __ProcessLineTraceOnVisibleChangedClosure_b__27_0(::Class_1_B54C5B5FD38ABA4B* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B54C5B5FD38ABA4B*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_B54C5B5FD38ABA4B___C___PROCESSLINETRACEONVISIBLECHANGEDCLOSURE_B__27_0_OFFSET))(this, a1, a2);
	}
};
