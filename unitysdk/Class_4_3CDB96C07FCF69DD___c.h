#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_EB8FEACBD39C7509;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_3CDB96C07FCF69DD___C_METHOD_1_818C73EC889FF52A_OFFSET UNITYSDK_OFFSET(0x16AD4930)
#define CLASS_4_3CDB96C07FCF69DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD48E0)
#define CLASS_4_3CDB96C07FCF69DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD4920)

inline static constexpr unsigned int Class_4_3CDB96C07FCF69DD___c_TypeDefinitionIndex = 62320;

class Class_4_3CDB96C07FCF69DD___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_4_EB8FEACBD39C7509*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_4_EB8FEACBD39C7509*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3CDB96C07FCF69DD___c_TypeDefinitionIndex)->GetStaticField(0x438C0);
	}
	static ::Class_4_3CDB96C07FCF69DD___c** StaticGet___9()
	{
		return (::Class_4_3CDB96C07FCF69DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_3CDB96C07FCF69DD___c_TypeDefinitionIndex)->GetStaticField(0x438C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_818C73EC889FF52A(::Class_4_EB8FEACBD39C7509* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_EB8FEACBD39C7509*))((::PBYTE)hIl2Cpp + CLASS_4_3CDB96C07FCF69DD___C_METHOD_1_818C73EC889FF52A_OFFSET))(this, a1);
	}
};
