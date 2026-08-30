#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define CLASS_1_56B95474652016B2_METHOD_1_19F3562A7061FEC1_OFFSET UNITYSDK_OFFSET(0xB7CA620)
#define CLASS_1_56B95474652016B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA6E0)

inline static constexpr unsigned int Class_1_56B95474652016B2_TypeDefinitionIndex = 68021;

class Class_1_56B95474652016B2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56B95474652016B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_19F3562A7061FEC1(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + CLASS_1_56B95474652016B2_METHOD_1_19F3562A7061FEC1_OFFSET))(this, a1, a2);
	}
};
