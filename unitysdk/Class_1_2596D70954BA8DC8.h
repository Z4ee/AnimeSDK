#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2596D70954BA8DC8_METHOD_1_6BB86695870EFBD1_1_OFFSET UNITYSDK_OFFSET(0x18499CF0)
#define CLASS_1_2596D70954BA8DC8_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x18499B60)
#define CLASS_1_2596D70954BA8DC8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18499E80)

inline static constexpr unsigned int Class_1_2596D70954BA8DC8_TypeDefinitionIndex = 23602;

class Class_1_2596D70954BA8DC8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2596D70954BA8DC8_TypeDefinitionIndex)->GetStaticField(0x30670);
	}
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2596D70954BA8DC8_TypeDefinitionIndex)->GetStaticField(0x30678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2596D70954BA8DC8__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2596D70954BA8DC8_METHOD_1_6BB86695870EFBD1_OFFSET))();
	}

	static ::System::Void Method_1_6BB86695870EFBD1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2596D70954BA8DC8_METHOD_1_6BB86695870EFBD1_1_OFFSET))();
	}
};
