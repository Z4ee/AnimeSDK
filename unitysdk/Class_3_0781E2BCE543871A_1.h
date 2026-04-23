#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_0781E2BCE543871A_1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8F5ECB0)
#define CLASS_3_0781E2BCE543871A_1_METHOD_3_4C3CC3790532D701_OFFSET UNITYSDK_OFFSET(0x8F5ECF0)
#define CLASS_3_0781E2BCE543871A_1_METHOD_3_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0x8F5EB90)
#define CLASS_3_0781E2BCE543871A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8F5EB50)

inline static constexpr unsigned int Class_3_0781E2BCE543871A_1_TypeDefinitionIndex = 67316;

class Class_3_0781E2BCE543871A_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C9F59B9D8CCA4DFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_1_METHOD_3_C9F59B9D8CCA4DFF_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_4C3CC3790532D701(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_0781E2BCE543871A_1_METHOD_3_4C3CC3790532D701_OFFSET))(this, a1);
	}
};
