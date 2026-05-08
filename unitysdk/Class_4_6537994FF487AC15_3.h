#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6CB00B19F1FE9BC.h"

class Class_3_9748BD8033D5EDFE;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_4_6537994FF487AC15_3_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x14F895C0)
#define CLASS_4_6537994FF487AC15_3_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14F89580)
#define CLASS_4_6537994FF487AC15_3_METHOD_4_673C71724813F13B_OFFSET UNITYSDK_OFFSET(0x14F89600)
#define CLASS_4_6537994FF487AC15_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14F896A0)

inline static constexpr unsigned int Class_4_6537994FF487AC15_3_TypeDefinitionIndex = 18238;

class Class_4_6537994FF487AC15_3 : public ::Class_3_C6CB00B19F1FE9BC<::Class_3_9748BD8033D5EDFE*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_3__CTOR_OFFSET))(this);
	}

	::System::String* Method_4_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_3_METHOD_4_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_3_METHOD_4_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_4_673C71724813F13B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_3_METHOD_4_673C71724813F13B_OFFSET))(this, a1);
	}
};
