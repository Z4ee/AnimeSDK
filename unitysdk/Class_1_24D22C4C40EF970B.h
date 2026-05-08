#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3C27FB03C7F640D0_8;
namespace System { class Action; }

#define CLASS_1_24D22C4C40EF970B_METHOD_1_58A8A6E2C7D0DA80_OFFSET UNITYSDK_OFFSET(0x133D93B0)
#define CLASS_1_24D22C4C40EF970B_METHOD_1_A92B7D83816BEFC5_OFFSET UNITYSDK_OFFSET(0x133D9520)
#define CLASS_1_24D22C4C40EF970B__CTOR_OFFSET UNITYSDK_OFFSET(0x133D9510)

inline static constexpr unsigned int Class_1_24D22C4C40EF970B_TypeDefinitionIndex = 53174;

class Class_1_24D22C4C40EF970B : public ::System::Object
{
public:
	::Class_3_3C27FB03C7F640D0_8* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58A8A6E2C7D0DA80(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B_METHOD_1_58A8A6E2C7D0DA80_OFFSET))(this, a1);
	}

	static ::Class_1_24D22C4C40EF970B* Method_1_A92B7D83816BEFC5(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::Class_1_24D22C4C40EF970B*(*)(::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B_METHOD_1_A92B7D83816BEFC5_OFFSET))(a1);
	}
};
