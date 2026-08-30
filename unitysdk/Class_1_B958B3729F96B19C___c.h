#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_B958B3729F96B19C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF6CA70)
#define CLASS_1_B958B3729F96B19C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6CAB0)
#define CLASS_1_B958B3729F96B19C___C__GET_HPRATIO_B__19_0_OFFSET UNITYSDK_OFFSET(0xBF6CAC0)
#define CLASS_1_B958B3729F96B19C___C__GET_HPTEXT_B__21_0_OFFSET UNITYSDK_OFFSET(0xBF6CAF0)

inline static constexpr unsigned int Class_1_B958B3729F96B19C___c_TypeDefinitionIndex = 50358;

class Class_1_B958B3729F96B19C___c : public ::System::Object
{
public:
	static ::Class_1_B958B3729F96B19C___c** StaticGet___9()
	{
		return (::Class_1_B958B3729F96B19C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x67330);
	}
	static ::System::Func_3<::System::Int32, ::System::Int32, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Func_3<::System::Int32, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x67338);
	}
	static ::System::Func_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet___9__19_0()
	{
		return (::System::Func_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B958B3729F96B19C___c_TypeDefinitionIndex)->GetStaticField(0x67340);
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
