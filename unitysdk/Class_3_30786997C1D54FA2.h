#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_30786997C1D54FA2_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x90B73A0)
#define CLASS_3_30786997C1D54FA2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x90B7250)
#define CLASS_3_30786997C1D54FA2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x90B72D0)
#define CLASS_3_30786997C1D54FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x90B73F0)
#define CLASS_3_30786997C1D54FA2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x90B7400)

inline static constexpr unsigned int Class_3_30786997C1D54FA2_TypeDefinitionIndex = 60622;

class Class_3_30786997C1D54FA2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28
	::System::UInt32 Field_3_2; // 0x30
	::UnityEngine::Vector2Int Field_3_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2__CTOR_OFFSET))(this);
	}

	static ::Class_3_30786997C1D54FA2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_30786997C1D54FA2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
