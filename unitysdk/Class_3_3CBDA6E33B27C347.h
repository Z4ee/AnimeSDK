#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_3CBDA6E33B27C347_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x15E59310)
#define CLASS_3_3CBDA6E33B27C347_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15E59440)
#define CLASS_3_3CBDA6E33B27C347_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15E59390)
#define CLASS_3_3CBDA6E33B27C347__CTOR_OFFSET UNITYSDK_OFFSET(0x15E59490)

inline static constexpr unsigned int Class_3_3CBDA6E33B27C347_TypeDefinitionIndex = 62948;

class Class_3_3CBDA6E33B27C347 : public ::Class_2_980BB27C20DEC196
{
public:
	::RPG::Client::MatchThreeBoardEnvTag Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBDA6E33B27C347__CTOR_OFFSET))(this);
	}

	static ::Class_3_3CBDA6E33B27C347* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_3CBDA6E33B27C347*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_3CBDA6E33B27C347_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBDA6E33B27C347_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CBDA6E33B27C347_ONCLEAR_OFFSET))(this);
	}
};
