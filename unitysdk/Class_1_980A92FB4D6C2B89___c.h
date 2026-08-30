#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F681AD6B57DC77A7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_980A92FB4D6C2B89___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1527B930)
#define CLASS_1_980A92FB4D6C2B89___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1527B970)
#define CLASS_1_980A92FB4D6C2B89___C__GETFIGHTSORDERED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1527B980)
#define CLASS_1_980A92FB4D6C2B89___C__GETFIGHTSORDERED_B__4_1_OFFSET UNITYSDK_OFFSET(0x1527B990)

inline static constexpr unsigned int Class_1_980A92FB4D6C2B89___c_TypeDefinitionIndex = 79699;

class Class_1_980A92FB4D6C2B89___c : public ::System::Object
{
public:
	static ::Class_1_980A92FB4D6C2B89___c** StaticGet___9()
	{
		return (::Class_1_980A92FB4D6C2B89___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980A92FB4D6C2B89___c_TypeDefinitionIndex)->GetStaticField(0x62CB0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980A92FB4D6C2B89___c_TypeDefinitionIndex)->GetStaticField(0x62CB8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>, ::Class_1_F681AD6B57DC77A7*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>, ::Class_1_F681AD6B57DC77A7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980A92FB4D6C2B89___c_TypeDefinitionIndex)->GetStaticField(0x62CC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_980A92FB4D6C2B89___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980A92FB4D6C2B89___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetFightsOrdered_b__4_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*> a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>))((::PBYTE)hIl2Cpp + CLASS_1_980A92FB4D6C2B89___C__GETFIGHTSORDERED_B__4_0_OFFSET))(this, a1);
	}

	::Class_1_F681AD6B57DC77A7* _GetFightsOrdered_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*> a1)
	{
		return ((::Class_1_F681AD6B57DC77A7*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F681AD6B57DC77A7*>))((::PBYTE)hIl2Cpp + CLASS_1_980A92FB4D6C2B89___C__GETFIGHTSORDERED_B__4_1_OFFSET))(this, a1);
	}
};
