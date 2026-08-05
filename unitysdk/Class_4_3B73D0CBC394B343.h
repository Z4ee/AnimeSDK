#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_3B73D0CBC394B343_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15684870)
#define CLASS_4_3B73D0CBC394B343_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x156845E0)
#define CLASS_4_3B73D0CBC394B343_METHOD_4_C10BF158F2861604_OFFSET UNITYSDK_OFFSET(0x15684670)
#define CLASS_4_3B73D0CBC394B343__CTOR_OFFSET UNITYSDK_OFFSET(0x156847D0)

inline static constexpr unsigned int Class_4_3B73D0CBC394B343_TypeDefinitionIndex = 67163;

class Class_4_3B73D0CBC394B343 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B73D0CBC394B343__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B73D0CBC394B343_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_C10BF158F2861604(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_3B73D0CBC394B343_METHOD_4_C10BF158F2861604_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3B73D0CBC394B343_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
