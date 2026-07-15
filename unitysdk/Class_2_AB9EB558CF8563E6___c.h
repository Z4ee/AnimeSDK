#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4BF33E880BD2240E;
class Class_2_5CEDCBB60BC93587;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_AB9EB558CF8563E6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA1380)
#define CLASS_2_AB9EB558CF8563E6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA13C0)
#define CLASS_2_AB9EB558CF8563E6___C___FETCHUSABLEBUFFITEM_B__14_0_OFFSET UNITYSDK_OFFSET(0x16BA1420)
#define CLASS_2_AB9EB558CF8563E6___C___FETCHUSABLEDAMAGEITEM_B__13_0_OFFSET UNITYSDK_OFFSET(0x16BA13D0)

inline static constexpr unsigned int Class_2_AB9EB558CF8563E6___c_TypeDefinitionIndex = 62898;

class Class_2_AB9EB558CF8563E6___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_5CEDCBB60BC93587*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_2_5CEDCBB60BC93587*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AB9EB558CF8563E6___c_TypeDefinitionIndex)->GetStaticField(0x37D40);
	}
	static ::System::Func_2<::Class_2_4BF33E880BD2240E*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_2_4BF33E880BD2240E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AB9EB558CF8563E6___c_TypeDefinitionIndex)->GetStaticField(0x37D48);
	}
	static ::Class_2_AB9EB558CF8563E6___c** StaticGet___9()
	{
		return (::Class_2_AB9EB558CF8563E6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AB9EB558CF8563E6___c_TypeDefinitionIndex)->GetStaticField(0x37D50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AB9EB558CF8563E6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB9EB558CF8563E6___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __FetchUsableDamageItem_b__13_0(::Class_2_5CEDCBB60BC93587* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5CEDCBB60BC93587*))((::PBYTE)hIl2Cpp + CLASS_2_AB9EB558CF8563E6___C___FETCHUSABLEDAMAGEITEM_B__13_0_OFFSET))(this, a1);
	}

	::System::Boolean __FetchUsableBuffItem_b__14_0(::Class_2_4BF33E880BD2240E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4BF33E880BD2240E*))((::PBYTE)hIl2Cpp + CLASS_2_AB9EB558CF8563E6___C___FETCHUSABLEBUFFITEM_B__14_0_OFFSET))(this, a1);
	}
};
