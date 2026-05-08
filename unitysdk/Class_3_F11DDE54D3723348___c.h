#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_29724340FE58DC7A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F11DDE54D3723348___C_METHOD_1_7FCA17B77E98A974_OFFSET UNITYSDK_OFFSET(0x1229E000)
#define CLASS_3_F11DDE54D3723348___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1229DFB0)
#define CLASS_3_F11DDE54D3723348___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1229DFF0)

inline static constexpr unsigned int Class_3_F11DDE54D3723348___c_TypeDefinitionIndex = 62829;

class Class_3_F11DDE54D3723348___c : public ::System::Object
{
public:
	static ::Class_3_F11DDE54D3723348___c** StaticGet___9()
	{
		return (::Class_3_F11DDE54D3723348___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F11DDE54D3723348___c_TypeDefinitionIndex)->GetStaticField(0x2DBB0);
	}
	static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_29724340FE58DC7A*>>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_29724340FE58DC7A*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F11DDE54D3723348___c_TypeDefinitionIndex)->GetStaticField(0x2DBB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7FCA17B77E98A974(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_29724340FE58DC7A*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_29724340FE58DC7A*>))((::PBYTE)hIl2Cpp + CLASS_3_F11DDE54D3723348___C_METHOD_1_7FCA17B77E98A974_OFFSET))(this, a1);
	}
};
