#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_CA4BCB29B9FC91EB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x107498C0)
#define CLASS_4_CA4BCB29B9FC91EB_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10748DD0)
#define CLASS_4_CA4BCB29B9FC91EB_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x107490F0)
#define CLASS_4_CA4BCB29B9FC91EB__CTOR_OFFSET UNITYSDK_OFFSET(0x10749670)

inline static constexpr unsigned int Class_4_CA4BCB29B9FC91EB_TypeDefinitionIndex = 68070;

class Class_4_CA4BCB29B9FC91EB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_7; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_6; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_3; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_4; // 0x50
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_5; // 0x58
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA4BCB29B9FC91EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA4BCB29B9FC91EB_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CA4BCB29B9FC91EB_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CA4BCB29B9FC91EB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
