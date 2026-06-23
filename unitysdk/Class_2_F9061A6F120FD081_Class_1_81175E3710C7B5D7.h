#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_81175E3710C7B5D7_METHOD_1_8140347B2EA29500_OFFSET UNITYSDK_OFFSET(0x1747C090)
#define CLASS_2_F9061A6F120FD081_CLASS_1_81175E3710C7B5D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1747C080)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_81175E3710C7B5D7_TypeDefinitionIndex = 75859;

class Class_2_F9061A6F120FD081_Class_1_81175E3710C7B5D7 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_81175E3710C7B5D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8140347B2EA29500(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_81175E3710C7B5D7_METHOD_1_8140347B2EA29500_OFFSET))(this, a1);
	}
};
