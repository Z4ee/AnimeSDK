#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1249CDB0)
#define CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_AC983BB33E28F43E_OFFSET UNITYSDK_OFFSET(0x1249CDC0)
#define CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1249CDA0)
#define CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1249CD90)

inline static constexpr unsigned int Class_1_3F749652156687C5_Class_1_546764423CB92BA4_TypeDefinitionIndex = 45646;

class Class_1_3F749652156687C5_Class_1_546764423CB92BA4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_AC983BB33E28F43E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F749652156687C5_CLASS_1_546764423CB92BA4_METHOD_1_AC983BB33E28F43E_OFFSET))(this, a1);
	}
};
