#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define CLASS_1_29421FA8BD61B616_METHOD_1_CA55870DEBCEA76B_OFFSET UNITYSDK_OFFSET(0x156AEAE0)
#define CLASS_1_29421FA8BD61B616_METHOD_1_E8D399C132EAED2B_OFFSET UNITYSDK_OFFSET(0x156AEBD0)
#define CLASS_1_29421FA8BD61B616__CTOR_OFFSET UNITYSDK_OFFSET(0x156AED50)

inline static constexpr unsigned int Class_1_29421FA8BD61B616_TypeDefinitionIndex = 68020;

class Class_1_29421FA8BD61B616 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA55870DEBCEA76B(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616_METHOD_1_CA55870DEBCEA76B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E8D399C132EAED2B(::RPG::GameCore::OptionTalkInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616_METHOD_1_E8D399C132EAED2B_OFFSET))(this, a1);
	}
};
