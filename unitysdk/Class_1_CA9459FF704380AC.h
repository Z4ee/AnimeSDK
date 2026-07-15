#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define CLASS_1_CA9459FF704380AC_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x19373DE0)
#define CLASS_1_CA9459FF704380AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19373CD0)
#define CLASS_1_CA9459FF704380AC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x19373D70)
#define CLASS_1_CA9459FF704380AC__CTOR_OFFSET UNITYSDK_OFFSET(0x19373CC0)

inline static constexpr unsigned int Class_1_CA9459FF704380AC_TypeDefinitionIndex = 63990;

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
