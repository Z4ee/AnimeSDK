#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_A5CD3B7C886C0FC0_CLASS_1_C743880852FB2234_METHOD_1_A07C8BB3F9FDB5B6_OFFSET UNITYSDK_OFFSET(0x17F47B80)
#define CLASS_3_A5CD3B7C886C0FC0_CLASS_1_C743880852FB2234__CTOR_OFFSET UNITYSDK_OFFSET(0x17F47B70)

inline static constexpr unsigned int Class_3_A5CD3B7C886C0FC0_Class_1_C743880852FB2234_TypeDefinitionIndex = 48802;

class Class_3_A5CD3B7C886C0FC0_Class_1_C743880852FB2234 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_5; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5CD3B7C886C0FC0_CLASS_1_C743880852FB2234__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A07C8BB3F9FDB5B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5CD3B7C886C0FC0_CLASS_1_C743880852FB2234_METHOD_1_A07C8BB3F9FDB5B6_OFFSET))(this, a1);
	}
};
