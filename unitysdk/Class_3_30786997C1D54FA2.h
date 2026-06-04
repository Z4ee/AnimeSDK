#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_30786997C1D54FA2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x13811D50)
#define CLASS_3_30786997C1D54FA2_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x13811EB0)
#define CLASS_3_30786997C1D54FA2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x13811DD0)
#define CLASS_3_30786997C1D54FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x13811F00)
#define CLASS_3_30786997C1D54FA2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x13811F10)

inline static constexpr unsigned int Class_3_30786997C1D54FA2_TypeDefinitionIndex = 61556;

class Class_3_30786997C1D54FA2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::UInt32 Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x2C
	::UnityEngine::Vector2Int Field_3_2; // 0x34

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

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30786997C1D54FA2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
