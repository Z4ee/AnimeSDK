#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_387;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_65CD671B98792583_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x145EB4C0)
#define CLASS_1_65CD671B98792583_METHOD_1_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0x145EB7B0)
#define CLASS_1_65CD671B98792583_METHOD_1_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x145EB950)
#define CLASS_1_65CD671B98792583__CCTOR_OFFSET UNITYSDK_OFFSET(0x145EB3F0)

inline static constexpr unsigned int Class_1_65CD671B98792583_TypeDefinitionIndex = 47308;

class Class_1_65CD671B98792583 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_387*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_387*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65CD671B98792583_TypeDefinitionIndex)->GetStaticField(0x394C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_092CD57850778EFC_OFFSET))();
	}

	static ::System::Void Method_1_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_387* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_387*))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_5DC9989DD20A6DEF_OFFSET))(a1);
	}

	static ::System::Void Method_1_A0374C870A27A45B(::Class_0_16E4307DCC419505_387* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_387*))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_A0374C870A27A45B_OFFSET))(a1);
	}
};
