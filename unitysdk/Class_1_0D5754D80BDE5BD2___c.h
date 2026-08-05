#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48B80789D8B0BB85;
namespace System { template <typename T> class Func_1; }

#define CLASS_1_0D5754D80BDE5BD2___C_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x1870BCD0)
#define CLASS_1_0D5754D80BDE5BD2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870BC80)
#define CLASS_1_0D5754D80BDE5BD2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1870BCC0)

inline static constexpr unsigned int Class_1_0D5754D80BDE5BD2___c_TypeDefinitionIndex = 61942;

class Class_1_0D5754D80BDE5BD2___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_1_48B80789D8B0BB85*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Class_1_48B80789D8B0BB85*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D5754D80BDE5BD2___c_TypeDefinitionIndex)->GetStaticField(0x34B40);
	}
	static ::Class_1_0D5754D80BDE5BD2___c** StaticGet___9()
	{
		return (::Class_1_0D5754D80BDE5BD2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D5754D80BDE5BD2___c_TypeDefinitionIndex)->GetStaticField(0x34B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D5754D80BDE5BD2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D5754D80BDE5BD2___C__CTOR_OFFSET))(this);
	}

	::Class_1_48B80789D8B0BB85* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_48B80789D8B0BB85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D5754D80BDE5BD2___C_METHOD_1_82ABFE24D5168B0C_OFFSET))(this);
	}
};
