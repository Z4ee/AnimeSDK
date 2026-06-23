#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_268F59F8DB8FA601_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12B48930)
#define CLASS_4_268F59F8DB8FA601_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x12B48690)
#define CLASS_4_268F59F8DB8FA601_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12B48480)
#define CLASS_4_268F59F8DB8FA601__CTOR_OFFSET UNITYSDK_OFFSET(0x12B486E0)

inline static constexpr unsigned int Class_4_268F59F8DB8FA601_TypeDefinitionIndex = 48879;

class Class_4_268F59F8DB8FA601 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x40
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_268F59F8DB8FA601__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_268F59F8DB8FA601_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_268F59F8DB8FA601_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_268F59F8DB8FA601_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
