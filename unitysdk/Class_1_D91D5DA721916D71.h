#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D91D5DA721916D71_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19D535B0)
#define CLASS_1_D91D5DA721916D71_METHOD_1_FD70ADD4E8CC2326_OFFSET UNITYSDK_OFFSET(0x19D53520)
#define CLASS_1_D91D5DA721916D71__CTOR_OFFSET UNITYSDK_OFFSET(0x19D53510)

inline static constexpr unsigned int Class_1_D91D5DA721916D71_TypeDefinitionIndex = 36428;

class Class_1_D91D5DA721916D71 : public ::System::Object
{
public:
	::System::Action* PEIHJAEIGHK; // 0x10
	::System::Single PGMIOKKLHIE; // 0x18
	::System::Single DBBJFODNPCA; // 0x1C

	::System::Void _ctor(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D91D5DA721916D71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD70ADD4E8CC2326(::System::UInt64 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D91D5DA721916D71_METHOD_1_FD70ADD4E8CC2326_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91D5DA721916D71_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
