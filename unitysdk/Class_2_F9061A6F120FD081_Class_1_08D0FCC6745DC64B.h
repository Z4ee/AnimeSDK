#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_F9061A6F120FD081;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_08D0FCC6745DC64B_METHOD_1_540DBFD155744CA2_OFFSET UNITYSDK_OFFSET(0x140EC920)
#define CLASS_2_F9061A6F120FD081_CLASS_1_08D0FCC6745DC64B__CTOR_OFFSET UNITYSDK_OFFSET(0x140EC910)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_08D0FCC6745DC64B_TypeDefinitionIndex = 79981;

class Class_2_F9061A6F120FD081_Class_1_08D0FCC6745DC64B : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_1_2; // 0x18
	::Class_2_F9061A6F120FD081* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_08D0FCC6745DC64B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_540DBFD155744CA2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_08D0FCC6745DC64B_METHOD_1_540DBFD155744CA2_OFFSET))(this, a1);
	}
};
