#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3C27FB03C7F640D0_8;
namespace System { class Action; }

#define CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET UNITYSDK_OFFSET(0x14C7CAE0)
#define CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET UNITYSDK_OFFSET(0x14C7CD90)
#define CLASS_1_53EF53585AF9D88A__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7CD80)

inline static constexpr unsigned int Class_1_53EF53585AF9D88A_TypeDefinitionIndex = 61097;

class Class_1_53EF53585AF9D88A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00F34DD1CABB08D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET))(this, a1);
	}

	static ::Class_1_53EF53585AF9D88A* Method_1_583F1446ECB3FC58(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::Class_1_53EF53585AF9D88A*(*)(::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET))(a1);
	}
};
