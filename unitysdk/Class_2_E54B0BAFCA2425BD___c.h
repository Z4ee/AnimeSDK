#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_EB8FEACBD39C7509;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E54B0BAFCA2425BD___C_METHOD_1_818C73EC889FF52A_OFFSET UNITYSDK_OFFSET(0x1195A660)
#define CLASS_2_E54B0BAFCA2425BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1195A610)
#define CLASS_2_E54B0BAFCA2425BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1195A650)

inline static constexpr unsigned int Class_2_E54B0BAFCA2425BD___c_TypeDefinitionIndex = 65568;

class Class_2_E54B0BAFCA2425BD___c : public ::System::Object
{
public:
	static ::Class_2_E54B0BAFCA2425BD___c** StaticGet___9()
	{
		return (::Class_2_E54B0BAFCA2425BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E54B0BAFCA2425BD___c_TypeDefinitionIndex)->GetStaticField(0x2AB40);
	}
	static ::System::Action_1<::Class_4_EB8FEACBD39C7509*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_4_EB8FEACBD39C7509*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E54B0BAFCA2425BD___c_TypeDefinitionIndex)->GetStaticField(0x2AB48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_818C73EC889FF52A(::Class_4_EB8FEACBD39C7509* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_EB8FEACBD39C7509*))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD___C_METHOD_1_818C73EC889FF52A_OFFSET))(this, a1);
	}
};
