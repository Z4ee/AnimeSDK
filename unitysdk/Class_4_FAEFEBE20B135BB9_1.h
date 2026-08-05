#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x153EF660)
#define CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x153EF350)
#define CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x153EF2C0)
#define CLASS_4_FAEFEBE20B135BB9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153EF5C0)

inline static constexpr unsigned int Class_4_FAEFEBE20B135BB9_1_TypeDefinitionIndex = 90392;

class Class_4_FAEFEBE20B135BB9_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FAEFEBE20B135BB9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FAEFEBE20B135BB9_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
