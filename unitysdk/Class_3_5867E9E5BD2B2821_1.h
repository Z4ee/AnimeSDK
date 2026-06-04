#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_29E838C92FC61B7A.h"

namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define CLASS_3_5867E9E5BD2B2821_1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA456330)
#define CLASS_3_5867E9E5BD2B2821_1_METHOD_3_B50FD89017B7E0F8_OFFSET UNITYSDK_OFFSET(0xA456370)
#define CLASS_3_5867E9E5BD2B2821_1_METHOD_3_C5E0D2AA3A5BB59B_OFFSET UNITYSDK_OFFSET(0xA4561C0)
#define CLASS_3_5867E9E5BD2B2821_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA456180)

inline static constexpr unsigned int Class_3_5867E9E5BD2B2821_1_TypeDefinitionIndex = 68268;

class Class_3_5867E9E5BD2B2821_1 : public ::Class_2_29E838C92FC61B7A
{
public:
	::RPG::Client::UIController* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_C5E0D2AA3A5BB59B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_1_METHOD_3_C5E0D2AA3A5BB59B_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_B50FD89017B7E0F8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_5867E9E5BD2B2821_1_METHOD_3_B50FD89017B7E0F8_OFFSET))(this, a1);
	}
};
