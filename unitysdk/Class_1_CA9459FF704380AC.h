#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define CLASS_1_CA9459FF704380AC_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x15C2A890)
#define CLASS_1_CA9459FF704380AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C2A780)
#define CLASS_1_CA9459FF704380AC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15C2A820)
#define CLASS_1_CA9459FF704380AC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A770)

inline static constexpr unsigned int Class_1_CA9459FF704380AC_TypeDefinitionIndex = 66983;

class Class_1_CA9459FF704380AC : public ::System::Object
{
public:
	::RPG::Client::RogueBuffData* _Buff_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::RogueBuffData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + CLASS_1_CA9459FF704380AC__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9459FF704380AC_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9459FF704380AC_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::RogueBuffData* get_Buff()
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9459FF704380AC_GET_BUFF_OFFSET))(this);
	}
};
