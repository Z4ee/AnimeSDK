#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EE518804D24B05ED_CLASS_1_80FEB89D4CB14D03_2_METHOD_1_8F5A2A12B49BDAE5_OFFSET UNITYSDK_OFFSET(0xF7B3260)
#define CLASS_2_EE518804D24B05ED_CLASS_1_80FEB89D4CB14D03_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B3250)

inline static constexpr unsigned int Class_2_EE518804D24B05ED_Class_1_80FEB89D4CB14D03_2_TypeDefinitionIndex = 60011;

class Class_2_EE518804D24B05ED_Class_1_80FEB89D4CB14D03_2 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_80FEB89D4CB14D03_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F5A2A12B49BDAE5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_80FEB89D4CB14D03_2_METHOD_1_8F5A2A12B49BDAE5_OFFSET))(this, a1);
	}
};
