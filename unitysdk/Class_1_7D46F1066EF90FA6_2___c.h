#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7D46F1066EF90FA6_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13720C40)
#define CLASS_1_7D46F1066EF90FA6_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13720C70)
#define CLASS_1_7D46F1066EF90FA6_2___C__GETCOMBATPOWER_B__3_0_OFFSET UNITYSDK_OFFSET(0x13720C80)
#define CLASS_1_7D46F1066EF90FA6_2___C__GETCOMBATPOWER_B__3_1_OFFSET UNITYSDK_OFFSET(0x13720C90)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_2___c_TypeDefinitionIndex = 58531;

class Class_1_7D46F1066EF90FA6_2___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D46F1066EF90FA6_2___c_TypeDefinitionIndex)->GetStaticField(0x51DD0);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D46F1066EF90FA6_2___c_TypeDefinitionIndex)->GetStaticField(0x51DD8);
	}
	static ::Class_1_7D46F1066EF90FA6_2___c** StaticGet___9()
	{
		return (::Class_1_7D46F1066EF90FA6_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D46F1066EF90FA6_2___c_TypeDefinitionIndex)->GetStaticField(0x51DE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetCombatPower_b__3_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2___C__GETCOMBATPOWER_B__3_0_OFFSET))(this, a1);
	}

	::System::UInt32 _GetCombatPower_b__3_1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2___C__GETCOMBATPOWER_B__3_1_OFFSET))(this, a1);
	}
};
