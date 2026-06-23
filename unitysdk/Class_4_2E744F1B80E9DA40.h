#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_2E744F1B80E9DA40_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x158890A0)
#define CLASS_4_2E744F1B80E9DA40_METHOD_4_3511A28C85177DDF_OFFSET UNITYSDK_OFFSET(0x15888D80)
#define CLASS_4_2E744F1B80E9DA40_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15888CF0)
#define CLASS_4_2E744F1B80E9DA40__CTOR_OFFSET UNITYSDK_OFFSET(0x15889000)

inline static constexpr unsigned int Class_4_2E744F1B80E9DA40_TypeDefinitionIndex = 51878;

class Class_4_2E744F1B80E9DA40 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E744F1B80E9DA40__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E744F1B80E9DA40_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_3511A28C85177DDF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2E744F1B80E9DA40_METHOD_4_3511A28C85177DDF_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E744F1B80E9DA40_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
