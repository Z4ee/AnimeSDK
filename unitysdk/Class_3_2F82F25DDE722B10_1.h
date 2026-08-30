#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_2F82F25DDE722B10_1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1845D3F0)
#define CLASS_3_2F82F25DDE722B10_1_METHOD_3_BE5CE60A38BF9255_OFFSET UNITYSDK_OFFSET(0x1845D430)
#define CLASS_3_2F82F25DDE722B10_1_METHOD_3_C5E0D2AA3A5BB59B_OFFSET UNITYSDK_OFFSET(0x1845D280)
#define CLASS_3_2F82F25DDE722B10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1845D240)

inline static constexpr unsigned int Class_3_2F82F25DDE722B10_1_TypeDefinitionIndex = 73015;

class Class_3_2F82F25DDE722B10_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C5E0D2AA3A5BB59B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_1_METHOD_3_C5E0D2AA3A5BB59B_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_BE5CE60A38BF9255(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_1_METHOD_3_BE5CE60A38BF9255_OFFSET))(this, a1);
	}
};
