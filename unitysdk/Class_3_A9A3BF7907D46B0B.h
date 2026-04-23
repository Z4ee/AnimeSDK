#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x12352430)
#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x123522F0)
#define CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12352370)
#define CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x12352480)
#define CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12352490)

inline static constexpr unsigned int Class_3_A9A3BF7907D46B0B_TypeDefinitionIndex = 60629;

class Class_3_A9A3BF7907D46B0B : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Boolean Field_3_2; // 0x28
	::UnityEngine::Vector2Int Field_3_0; // 0x2C
	::System::UInt32 Field_3_1; // 0x34

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

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
