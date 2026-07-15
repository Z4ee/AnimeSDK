#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DDA91CFFA134F45;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_6DDA91CFFA134F45___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D0120)
#define CLASS_2_6DDA91CFFA134F45___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174D0150)
#define CLASS_2_6DDA91CFFA134F45___C___CREATETRIGGER_B__2_0_OFFSET UNITYSDK_OFFSET(0x174D0160)

inline static constexpr unsigned int Class_2_6DDA91CFFA134F45___c_TypeDefinitionIndex = 73122;

class Class_2_6DDA91CFFA134F45___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_2_6DDA91CFFA134F45*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_2_6DDA91CFFA134F45*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6DDA91CFFA134F45___c_TypeDefinitionIndex)->GetStaticField(0xF4A0);
	}
	static ::Class_2_6DDA91CFFA134F45___c** StaticGet___9()
	{
		return (::Class_2_6DDA91CFFA134F45___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6DDA91CFFA134F45___c_TypeDefinitionIndex)->GetStaticField(0xF4A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__2_0(::Class_2_6DDA91CFFA134F45* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6DDA91CFFA134F45*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_6DDA91CFFA134F45___C___CREATETRIGGER_B__2_0_OFFSET))(this, a1, a2);
	}
};
