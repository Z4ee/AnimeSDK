#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_61BAD7443DA05827___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C123660)
#define CLASS_1_61BAD7443DA05827___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1236A0)
#define CLASS_1_61BAD7443DA05827___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C123730)
#define CLASS_1_61BAD7443DA05827___C___GETDICTDESC_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C1236B0)

inline static constexpr unsigned int Class_1_61BAD7443DA05827___c_TypeDefinitionIndex = 36652;

class Class_1_61BAD7443DA05827___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61BAD7443DA05827___c_TypeDefinitionIndex)->GetStaticField(0xE020);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61BAD7443DA05827___c_TypeDefinitionIndex)->GetStaticField(0xE028);
	}
	static ::Class_1_61BAD7443DA05827___c** StaticGet___9()
	{
		return (::Class_1_61BAD7443DA05827___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61BAD7443DA05827___c_TypeDefinitionIndex)->GetStaticField(0xE030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C__CTOR_OFFSET))(this);
	}

	::System::String* __GetDictDesc_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C___GETDICTDESC_B__3_0_OFFSET))(this, a1);
	}

	::System::UInt32 __FilterCatValueMapByExtrem_b__5_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET))(this, a1);
	}
};
