#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3C27FB03C7F640D0_8;
namespace System { class Action; }

#define CLASS_1_24D22C4C40EF970B_1_METHOD_1_58A8A6E2C7D0DA80_OFFSET UNITYSDK_OFFSET(0x140C0350)
#define CLASS_1_24D22C4C40EF970B_1_METHOD_1_A92B7D83816BEFC5_OFFSET UNITYSDK_OFFSET(0x140C04C0)
#define CLASS_1_24D22C4C40EF970B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140C04B0)

inline static constexpr unsigned int Class_1_24D22C4C40EF970B_1_TypeDefinitionIndex = 73753;

class Class_1_24D22C4C40EF970B_1 : public ::System::Object
{
public:
	::Class_3_3C27FB03C7F640D0_8* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58A8A6E2C7D0DA80(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B_1_METHOD_1_58A8A6E2C7D0DA80_OFFSET))(this, a1);
	}

	static ::Class_1_24D22C4C40EF970B_1* Method_1_A92B7D83816BEFC5(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::Class_1_24D22C4C40EF970B_1*(*)(::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_24D22C4C40EF970B_1_METHOD_1_A92B7D83816BEFC5_OFFSET))(a1);
	}
};
