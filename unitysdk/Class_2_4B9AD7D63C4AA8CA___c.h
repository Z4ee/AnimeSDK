#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B1B7187C58DA729;
class Class_2_ED08B3C530116743;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_4B9AD7D63C4AA8CA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF23B100)
#define CLASS_2_4B9AD7D63C4AA8CA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF23B140)
#define CLASS_2_4B9AD7D63C4AA8CA___C__GET_REACTIVESELECTED_B__8_0_OFFSET UNITYSDK_OFFSET(0xF23B150)

inline static constexpr unsigned int Class_2_4B9AD7D63C4AA8CA___c_TypeDefinitionIndex = 79509;

class Class_2_4B9AD7D63C4AA8CA___c : public ::System::Object
{
public:
	static ::Class_2_4B9AD7D63C4AA8CA___c** StaticGet___9()
	{
		return (::Class_2_4B9AD7D63C4AA8CA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B9AD7D63C4AA8CA___c_TypeDefinitionIndex)->GetStaticField(0x53A70);
	}
	static ::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_ED08B3C530116743*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::Class_1_0B1B7187C58DA729*, ::Class_2_ED08B3C530116743*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B9AD7D63C4AA8CA___c_TypeDefinitionIndex)->GetStaticField(0x53A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4B9AD7D63C4AA8CA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9AD7D63C4AA8CA___C__CTOR_OFFSET))(this);
	}

	::Class_2_ED08B3C530116743* _get_ReactiveSelected_b__8_0(::Class_1_0B1B7187C58DA729* a1)
	{
		return ((::Class_2_ED08B3C530116743*(*)(::PVOID, ::Class_1_0B1B7187C58DA729*))((::PBYTE)hIl2Cpp + CLASS_2_4B9AD7D63C4AA8CA___C__GET_REACTIVESELECTED_B__8_0_OFFSET))(this, a1);
	}
};
