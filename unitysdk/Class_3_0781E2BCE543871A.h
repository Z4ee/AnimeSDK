#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_0781E2BCE543871A_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1250E710)
#define CLASS_3_0781E2BCE543871A_METHOD_3_4C3CC3790532D701_OFFSET UNITYSDK_OFFSET(0x1250E750)
#define CLASS_3_0781E2BCE543871A_METHOD_3_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x1250E640)
#define CLASS_3_0781E2BCE543871A__CTOR_OFFSET UNITYSDK_OFFSET(0x1250E600)
#define CLASS_3_0781E2BCE543871A__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1250E830)

inline static constexpr unsigned int Class_3_0781E2BCE543871A_TypeDefinitionIndex = 67315;

class Class_3_0781E2BCE543871A : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_METHOD_3_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_4C3CC3790532D701(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_METHOD_3_4C3CC3790532D701_OFFSET))(this, a1);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
