#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_7AAE980FA4236F68_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x171B5BD0)
#define CLASS_4_7AAE980FA4236F68_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x171B51F0)
#define CLASS_4_7AAE980FA4236F68_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x171B4FE0)
#define CLASS_4_7AAE980FA4236F68__CTOR_OFFSET UNITYSDK_OFFSET(0x171B59C0)

inline static constexpr unsigned int Class_4_7AAE980FA4236F68_TypeDefinitionIndex = 86993;

class Class_4_7AAE980FA4236F68 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_6; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7AAE980FA4236F68_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
