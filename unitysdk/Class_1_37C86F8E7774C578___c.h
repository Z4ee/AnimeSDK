#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_37C86F8E7774C578___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164BC2D0)
#define CLASS_1_37C86F8E7774C578___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164BC310)
#define CLASS_1_37C86F8E7774C578___C__GET_CANINTERACT_B__54_0_OFFSET UNITYSDK_OFFSET(0x164BC320)

inline static constexpr unsigned int Class_1_37C86F8E7774C578___c_TypeDefinitionIndex = 79474;

class Class_1_37C86F8E7774C578___c : public ::System::Object
{
public:
	static ::System::Func_2<::Il2CppArray<::System::Boolean>*, ::System::Boolean>** StaticGet___9__54_0()
	{
		return (::System::Func_2<::Il2CppArray<::System::Boolean>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37C86F8E7774C578___c_TypeDefinitionIndex)->GetStaticField(0x65690);
	}
	static ::Class_1_37C86F8E7774C578___c** StaticGet___9()
	{
		return (::Class_1_37C86F8E7774C578___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_37C86F8E7774C578___c_TypeDefinitionIndex)->GetStaticField(0x65698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_CanInteract_b__54_0(::Il2CppArray<::System::Boolean>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578___C__GET_CANINTERACT_B__54_0_OFFSET))(this, a1);
	}
};
