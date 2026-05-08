#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9A16BB53176B1EDB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_14A21C97B2AEB8D2___C_METHOD_1_E523BC84EDA5FED9_OFFSET UNITYSDK_OFFSET(0xEA8F080)
#define CLASS_2_14A21C97B2AEB8D2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA8F030)
#define CLASS_2_14A21C97B2AEB8D2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA8F070)

inline static constexpr unsigned int Class_2_14A21C97B2AEB8D2___c_TypeDefinitionIndex = 81227;

class Class_2_14A21C97B2AEB8D2___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_9A16BB53176B1EDB*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_2_9A16BB53176B1EDB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14A21C97B2AEB8D2___c_TypeDefinitionIndex)->GetStaticField(0x3B060);
	}
	static ::Class_2_14A21C97B2AEB8D2___c** StaticGet___9()
	{
		return (::Class_2_14A21C97B2AEB8D2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_14A21C97B2AEB8D2___c_TypeDefinitionIndex)->GetStaticField(0x3B068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_14A21C97B2AEB8D2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14A21C97B2AEB8D2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E523BC84EDA5FED9(::Class_2_9A16BB53176B1EDB* a1, ::Class_2_9A16BB53176B1EDB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9A16BB53176B1EDB*, ::Class_2_9A16BB53176B1EDB*))((::PBYTE)hIl2Cpp + CLASS_2_14A21C97B2AEB8D2___C_METHOD_1_E523BC84EDA5FED9_OFFSET))(this, a1, a2);
	}
};
