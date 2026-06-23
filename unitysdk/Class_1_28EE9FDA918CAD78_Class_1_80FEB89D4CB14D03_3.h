#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_28EE9FDA918CAD78_CLASS_1_80FEB89D4CB14D03_3_METHOD_1_8F5A2A12B49BDAE5_OFFSET UNITYSDK_OFFSET(0x1337AF20)
#define CLASS_1_28EE9FDA918CAD78_CLASS_1_80FEB89D4CB14D03_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1337AF10)

inline static constexpr unsigned int Class_1_28EE9FDA918CAD78_Class_1_80FEB89D4CB14D03_3_TypeDefinitionIndex = 80160;

class Class_1_28EE9FDA918CAD78_Class_1_80FEB89D4CB14D03_3 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28EE9FDA918CAD78_CLASS_1_80FEB89D4CB14D03_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F5A2A12B49BDAE5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_28EE9FDA918CAD78_CLASS_1_80FEB89D4CB14D03_3_METHOD_1_8F5A2A12B49BDAE5_OFFSET))(this, a1);
	}
};
