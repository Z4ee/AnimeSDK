#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_B958B3729F96B19C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1787EFA0)
#define CLASS_1_B958B3729F96B19C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1787EFE0)
#define CLASS_1_B958B3729F96B19C___C__GET_HPRATIO_B__19_0_OFFSET UNITYSDK_OFFSET(0x1787EFF0)
#define CLASS_1_B958B3729F96B19C___C__GET_HPTEXT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1787F020)

inline static constexpr unsigned int Class_1_B958B3729F96B19C___c_TypeDefinitionIndex = 50358;

class Class_1_B958B3729F96B19C___c : public ::System::Object
{
public:
	static ::System::Func_3<::System::Int32, ::System::Int32, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Func_3<::System::Int32, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x671D0);
	}
	static ::System::Func_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet___9__19_0()
	{
		return (::System::Func_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x671D8);
	}
	static ::Class_1_B958B3729F96B19C___c** StaticGet___9()
	{
		return (::Class_1_B958B3729F96B19C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x671E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C___C__CTOR_OFFSET))(this);
	}

	::System::Single _get_HpRatio_b__19_0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C___C__GET_HPRATIO_B__19_0_OFFSET))(this, a1, a2);
	}

	::System::String* _get_HpText_b__21_0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C___C__GET_HPTEXT_B__21_0_OFFSET))(this, a1, a2);
	}
};
