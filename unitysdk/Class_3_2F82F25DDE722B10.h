#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_2F82F25DDE722B10_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x169A09A0)
#define CLASS_3_2F82F25DDE722B10_METHOD_3_BE5CE60A38BF9255_OFFSET UNITYSDK_OFFSET(0x169A09E0)
#define CLASS_3_2F82F25DDE722B10_METHOD_3_BFCBCC58B41174A0_OFFSET UNITYSDK_OFFSET(0x169A08A0)
#define CLASS_3_2F82F25DDE722B10__CTOR_OFFSET UNITYSDK_OFFSET(0x169A0860)
#define CLASS_3_2F82F25DDE722B10__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x169A0B30)

inline static constexpr unsigned int Class_3_2F82F25DDE722B10_TypeDefinitionIndex = 69756;

class Class_3_2F82F25DDE722B10 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_BFCBCC58B41174A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_METHOD_3_BFCBCC58B41174A0_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_BE5CE60A38BF9255(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10_METHOD_3_BE5CE60A38BF9255_OFFSET))(this, a1);
	}

	::System::Void _PlayTransition_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F82F25DDE722B10__PLAYTRANSITION_B__1_0_OFFSET))(this);
	}
};
