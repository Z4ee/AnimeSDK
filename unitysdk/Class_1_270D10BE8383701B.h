#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_95455B7ED919F227.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_270D10BE8383701B_METHOD_1_146BAB8980C5EC65_OFFSET UNITYSDK_OFFSET(0x16AEF6F0)
#define CLASS_1_270D10BE8383701B_METHOD_1_401B5FD892D2920C_OFFSET UNITYSDK_OFFSET(0x16AEF4D0)
#define CLASS_1_270D10BE8383701B_METHOD_1_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x16AEF900)
#define CLASS_1_270D10BE8383701B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16AEF890)
#define CLASS_1_270D10BE8383701B__CTOR_OFFSET UNITYSDK_OFFSET(0x16AEF470)

inline static constexpr unsigned int Class_1_270D10BE8383701B_TypeDefinitionIndex = 85375;

class Class_1_270D10BE8383701B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_95455B7ED919F227>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_270D10BE8383701B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_401B5FD892D2920C(::System::Action_1<::Struct_2_95455B7ED919F227>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_95455B7ED919F227>*))((::PBYTE)hIl2Cpp + CLASS_1_270D10BE8383701B_METHOD_1_401B5FD892D2920C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_146BAB8980C5EC65(::Struct_2_95455B7ED919F227 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_95455B7ED919F227))((::PBYTE)hIl2Cpp + CLASS_1_270D10BE8383701B_METHOD_1_146BAB8980C5EC65_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_270D10BE8383701B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_6BCEDD4814D8A8D9(::Struct_2_95455B7ED919F227 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_95455B7ED919F227))((::PBYTE)hIl2Cpp + CLASS_1_270D10BE8383701B_METHOD_1_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}
};
