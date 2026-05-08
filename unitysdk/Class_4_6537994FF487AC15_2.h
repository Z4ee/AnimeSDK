#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6CB00B19F1FE9BC.h"

class Class_3_5B503B74E510E6BC;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_4_6537994FF487AC15_2_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x16D73B00)
#define CLASS_4_6537994FF487AC15_2_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16D73AC0)
#define CLASS_4_6537994FF487AC15_2_METHOD_4_673C71724813F13B_OFFSET UNITYSDK_OFFSET(0x16D73B40)
#define CLASS_4_6537994FF487AC15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16D73BE0)

inline static constexpr unsigned int Class_4_6537994FF487AC15_2_TypeDefinitionIndex = 17693;

class Class_4_6537994FF487AC15_2 : public ::Class_3_C6CB00B19F1FE9BC<::Class_3_5B503B74E510E6BC*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_2__CTOR_OFFSET))(this);
	}

	::System::String* Method_4_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_2_METHOD_4_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_2_METHOD_4_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_4_673C71724813F13B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_6537994FF487AC15_2_METHOD_4_673C71724813F13B_OFFSET))(this, a1);
	}
};
