#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_452;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_65CD671B98792583_METHOD_1_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0x13F3A0B0)
#define CLASS_1_65CD671B98792583_METHOD_1_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x13F3A250)
#define CLASS_1_65CD671B98792583_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x13F39DC0)
#define CLASS_1_65CD671B98792583__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F39CF0)

inline static constexpr unsigned int Class_1_65CD671B98792583_TypeDefinitionIndex = 54949;

class Class_1_65CD671B98792583 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_452*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_452*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65CD671B98792583_TypeDefinitionIndex)->GetStaticField(0x3E4D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_F29D7A7F508EABE1_OFFSET))();
	}

	static ::System::Void Method_1_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_5DC9989DD20A6DEF_OFFSET))(a1);
	}

	static ::System::Void Method_1_A0374C870A27A45B(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_65CD671B98792583_METHOD_1_A0374C870A27A45B_OFFSET))(a1);
	}
};
