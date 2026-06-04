#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_5867E9E5BD2B2821_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDE4A2F0)
#define CLASS_3_5867E9E5BD2B2821_METHOD_3_B50FD89017B7E0F8_OFFSET UNITYSDK_OFFSET(0xDE4A330)
#define CLASS_3_5867E9E5BD2B2821_METHOD_3_BFCBCC58B41174A0_OFFSET UNITYSDK_OFFSET(0xDE4A1F0)
#define CLASS_3_5867E9E5BD2B2821__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4A1B0)
#define CLASS_3_5867E9E5BD2B2821__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0xDE4A410)

inline static constexpr unsigned int Class_3_5867E9E5BD2B2821_TypeDefinitionIndex = 68267;

class Class_3_5867E9E5BD2B2821 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_BFCBCC58B41174A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_METHOD_3_BFCBCC58B41174A0_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_B50FD89017B7E0F8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_METHOD_3_B50FD89017B7E0F8_OFFSET))(this, a1);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
