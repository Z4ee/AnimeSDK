#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_1C467528FD5C8A86_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14D1A610)
#define CLASS_4_1C467528FD5C8A86_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14D1A3C0)
#define CLASS_4_1C467528FD5C8A86_METHOD_4_D37C77CA65DB1760_OFFSET UNITYSDK_OFFSET(0x14D1A450)
#define CLASS_4_1C467528FD5C8A86__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1A570)

inline static constexpr unsigned int Class_4_1C467528FD5C8A86_TypeDefinitionIndex = 80455;

class Class_4_1C467528FD5C8A86 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C467528FD5C8A86__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C467528FD5C8A86_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_D37C77CA65DB1760(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_1C467528FD5C8A86_METHOD_4_D37C77CA65DB1760_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C467528FD5C8A86_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
