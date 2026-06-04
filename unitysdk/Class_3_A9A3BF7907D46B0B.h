#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1355CC50)
#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x1355CDB0)
#define CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1355CCD0)
#define CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1355CE00)
#define CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1355CE10)

inline static constexpr unsigned int Class_3_A9A3BF7907D46B0B_TypeDefinitionIndex = 61563;

class Class_3_A9A3BF7907D46B0B : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Boolean Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x2C
	::System::UInt32 Field_3_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET))(this);
	}

	static ::Class_3_A9A3BF7907D46B0B* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_A9A3BF7907D46B0B*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
