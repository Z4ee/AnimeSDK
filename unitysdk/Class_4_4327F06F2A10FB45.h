#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_4327F06F2A10FB45_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1C1178F0)
#define CLASS_4_4327F06F2A10FB45_METHOD_4_29753DB3C8C934FE_OFFSET UNITYSDK_OFFSET(0x1C1173B0)
#define CLASS_4_4327F06F2A10FB45_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1C1171A0)
#define CLASS_4_4327F06F2A10FB45__CTOR_OFFSET UNITYSDK_OFFSET(0x1C117750)

inline static constexpr unsigned int Class_4_4327F06F2A10FB45_TypeDefinitionIndex = 63415;

class Class_4_4327F06F2A10FB45 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x38
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_3; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4327F06F2A10FB45__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4327F06F2A10FB45_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_29753DB3C8C934FE(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4327F06F2A10FB45_METHOD_4_29753DB3C8C934FE_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4327F06F2A10FB45_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
