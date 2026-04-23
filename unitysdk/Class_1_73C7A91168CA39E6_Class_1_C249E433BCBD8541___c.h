#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_73C7A91168CA39E6_CatStatType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BF85E0)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF8620)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__DEBUGSTRING_B__6_0_OFFSET UNITYSDK_OFFSET(0x17BF8630)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__DEBUGSTRING_B__6_1_OFFSET UNITYSDK_OFFSET(0x17BF86D0)

inline static constexpr unsigned int Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c_TypeDefinitionIndex = 34718;

class Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Class_1_73C7A91168CA39E6_CatStatType, ::System::UInt32>, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Class_1_73C7A91168CA39E6_CatStatType, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c_TypeDefinitionIndex)->GetStaticField(0x6A150);
	}
	static ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c** StaticGet___9()
	{
		return (::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c_TypeDefinitionIndex)->GetStaticField(0x6A158);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541___c_TypeDefinitionIndex)->GetStaticField(0x6A160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__CTOR_OFFSET))(this);
	}

	::System::String* _DebugString_b__6_0(::System::Collections::Generic::KeyValuePair_2<::Class_1_73C7A91168CA39E6_CatStatType, ::System::UInt32> p)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Class_1_73C7A91168CA39E6_CatStatType, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__DEBUGSTRING_B__6_0_OFFSET))(this, p);
	}

	::System::String* _DebugString_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> p)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_C249E433BCBD8541___C__DEBUGSTRING_B__6_1_OFFSET))(this, p);
	}
};
