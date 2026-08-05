#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E9DF3AE65046D8DB___C_METHOD_1_00519575CDA2B991_OFFSET UNITYSDK_OFFSET(0x14EA32D0)
#define CLASS_2_E9DF3AE65046D8DB___C_METHOD_1_804AB67C0274EA6E_OFFSET UNITYSDK_OFFSET(0x14EA32E0)
#define CLASS_2_E9DF3AE65046D8DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EA3280)
#define CLASS_2_E9DF3AE65046D8DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA32C0)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB___c_TypeDefinitionIndex = 77041;

class Class_2_E9DF3AE65046D8DB___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB___c_TypeDefinitionIndex)->GetStaticField(0x447B0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB___c_TypeDefinitionIndex)->GetStaticField(0x447B8);
	}
	static ::Class_2_E9DF3AE65046D8DB___c** StaticGet___9()
	{
		return (::Class_2_E9DF3AE65046D8DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB___c_TypeDefinitionIndex)->GetStaticField(0x447C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_00519575CDA2B991(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB___C_METHOD_1_00519575CDA2B991_OFFSET))(this, a1);
	}

	::System::String* Method_1_804AB67C0274EA6E(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB___C_METHOD_1_804AB67C0274EA6E_OFFSET))(this, a1);
	}
};
