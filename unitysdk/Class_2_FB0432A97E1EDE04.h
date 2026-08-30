#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_169.h"

namespace RPG::Client { class UIController; }

#define CLASS_2_FB0432A97E1EDE04_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17A35430)
#define CLASS_2_FB0432A97E1EDE04_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x17A352F0)
#define CLASS_2_FB0432A97E1EDE04_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x17A351B0)
#define CLASS_2_FB0432A97E1EDE04_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x17A354B0)
#define CLASS_2_FB0432A97E1EDE04__CTOR_OFFSET UNITYSDK_OFFSET(0x17A351A0)

inline static constexpr unsigned int Class_2_FB0432A97E1EDE04_TypeDefinitionIndex = 73026;

class Class_2_FB0432A97E1EDE04 : public ::Class_1_43BD383C98B4C0C5_169
{
public:
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x10
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnTransitionEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONTRANSITIONEND_OFFSET))(this);
	}
};
