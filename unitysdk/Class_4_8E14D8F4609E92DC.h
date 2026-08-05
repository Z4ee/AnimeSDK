#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_8E14D8F4609E92DC_METHOD_4_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x10CF3EC0)
#define CLASS_4_8E14D8F4609E92DC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10CF4200)
#define CLASS_4_8E14D8F4609E92DC_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10CF3E30)
#define CLASS_4_8E14D8F4609E92DC__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF4160)

inline static constexpr unsigned int Class_4_8E14D8F4609E92DC_TypeDefinitionIndex = 51869;

class Class_4_8E14D8F4609E92DC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E14D8F4609E92DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E14D8F4609E92DC_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_22EB5E1405A8445C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8E14D8F4609E92DC_METHOD_4_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8E14D8F4609E92DC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
