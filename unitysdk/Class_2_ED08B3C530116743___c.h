#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B1B7187C58DA729;
class Class_2_7AAFD4D5C55BC1B4;
class Class_2_CF06A63D80B01EAC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_ED08B3C530116743___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC8C510)
#define CLASS_2_ED08B3C530116743___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C550)
#define CLASS_2_ED08B3C530116743___C__GET_REACTIVEDRAGGED_B__22_0_OFFSET UNITYSDK_OFFSET(0xCC8C5D0)
#define CLASS_2_ED08B3C530116743___C__GET_REACTIVEIDLE_B__17_0_OFFSET UNITYSDK_OFFSET(0xCC8C560)

inline static constexpr unsigned int Class_2_ED08B3C530116743___c_TypeDefinitionIndex = 79518;

class Class_2_ED08B3C530116743___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_7AAFD4D5C55BC1B4*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_7AAFD4D5C55BC1B4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED08B3C530116743___c_TypeDefinitionIndex)->GetStaticField(0x26770);
	}
	static ::Class_2_ED08B3C530116743___c** StaticGet___9()
	{
		return (::Class_2_ED08B3C530116743___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED08B3C530116743___c_TypeDefinitionIndex)->GetStaticField(0x26778);
	}
	static ::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_CF06A63D80B01EAC*>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_CF06A63D80B01EAC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED08B3C530116743___c_TypeDefinitionIndex)->GetStaticField(0x26780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED08B3C530116743___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED08B3C530116743___C__CTOR_OFFSET))(this);
	}

	::Class_2_7AAFD4D5C55BC1B4* _get_ReactiveIdle_b__17_0(::Class_1_0B1B7187C58DA729* a1)
	{
		return ((::Class_2_7AAFD4D5C55BC1B4*(*)(::PVOID, ::Class_1_0B1B7187C58DA729*))((::PBYTE)hIl2Cpp + CLASS_2_ED08B3C530116743___C__GET_REACTIVEIDLE_B__17_0_OFFSET))(this, a1);
	}

	::Class_2_CF06A63D80B01EAC* _get_ReactiveDragged_b__22_0(::Class_1_0B1B7187C58DA729* a1)
	{
		return ((::Class_2_CF06A63D80B01EAC*(*)(::PVOID, ::Class_1_0B1B7187C58DA729*))((::PBYTE)hIl2Cpp + CLASS_2_ED08B3C530116743___C__GET_REACTIVEDRAGGED_B__22_0_OFFSET))(this, a1);
	}
};
