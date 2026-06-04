#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_335;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2CE8126B86248913_METHOD_1_26B4E77F31621E84_OFFSET UNITYSDK_OFFSET(0xAB802E0)
#define CLASS_1_2CE8126B86248913_METHOD_1_3DA44790B94B01C2_OFFSET UNITYSDK_OFFSET(0xAB80430)
#define CLASS_1_2CE8126B86248913_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xAB80570)
#define CLASS_1_2CE8126B86248913__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB807B0)

inline static constexpr unsigned int Class_1_2CE8126B86248913_TypeDefinitionIndex = 46455;

class Class_1_2CE8126B86248913 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_335*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_335*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CE8126B86248913_TypeDefinitionIndex)->GetStaticField(0xBEF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CE8126B86248913__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_26B4E77F31621E84(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2CE8126B86248913_METHOD_1_26B4E77F31621E84_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3DA44790B94B01C2(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CE8126B86248913_METHOD_1_3DA44790B94B01C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CE8126B86248913_METHOD_1_4D9E1AC61B60D577_OFFSET))();
	}
};
