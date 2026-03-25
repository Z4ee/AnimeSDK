#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_ACB7D5E02B4F7F4F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB41500)
#define CLASS_3_ACB7D5E02B4F7F4F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB41540)
#define CLASS_3_ACB7D5E02B4F7F4F___C___REORDER_B__5_0_OFFSET UNITYSDK_OFFSET(0xCB41550)

inline static constexpr unsigned int Class_3_ACB7D5E02B4F7F4F___c_TypeDefinitionIndex = 63030;

class Class_3_ACB7D5E02B4F7F4F___c : public ::System::Object
{
public:
	static ::Class_3_ACB7D5E02B4F7F4F___c** StaticGet___9()
	{
		return (::Class_3_ACB7D5E02B4F7F4F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ACB7D5E02B4F7F4F___c_TypeDefinitionIndex)->GetStaticField(0x45AD0);
	}
	static ::System::Comparison_1<::Class_2_49CAB3DE74280C58*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_49CAB3DE74280C58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ACB7D5E02B4F7F4F___c_TypeDefinitionIndex)->GetStaticField(0x45AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ReOrder_b__5_0(::Class_2_49CAB3DE74280C58* a, ::Class_2_49CAB3DE74280C58* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F___C___REORDER_B__5_0_OFFSET))(this, a, b);
	}
};
