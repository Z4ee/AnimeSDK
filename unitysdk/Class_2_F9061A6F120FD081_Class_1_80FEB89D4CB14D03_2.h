#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_80FEB89D4CB14D03_2_METHOD_1_8F5A2A12B49BDAE5_OFFSET UNITYSDK_OFFSET(0x12F0B050)
#define CLASS_2_F9061A6F120FD081_CLASS_1_80FEB89D4CB14D03_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12F0B040)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_80FEB89D4CB14D03_2_TypeDefinitionIndex = 79971;

class Class_2_F9061A6F120FD081_Class_1_80FEB89D4CB14D03_2 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_80FEB89D4CB14D03_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F5A2A12B49BDAE5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_80FEB89D4CB14D03_2_METHOD_1_8F5A2A12B49BDAE5_OFFSET))(this, a1);
	}
};
