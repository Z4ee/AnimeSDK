#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D2F9EE261815B73;
class Class_1_D051025A3269812F;

#define CLASS_1_D051025A3269812F___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE2B90)
#define CLASS_1_D051025A3269812F___C__DISPLAYCLASS13_0__STARTDOWNLOADPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xAAE36B0)

inline static constexpr unsigned int Class_1_D051025A3269812F___c__DisplayClass13_0_TypeDefinitionIndex = 70494;

class Class_1_D051025A3269812F___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_D051025A3269812F* __4__this; // 0x10
	::System::UInt32 revision; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D051025A3269812F___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartDownloadPatch_b__0(::System::Boolean a1, ::Class_1_0D2F9EE261815B73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_0D2F9EE261815B73*))((::PBYTE)hIl2Cpp + CLASS_1_D051025A3269812F___C__DISPLAYCLASS13_0__STARTDOWNLOADPATCH_B__0_OFFSET))(this, a1, a2);
	}
};
