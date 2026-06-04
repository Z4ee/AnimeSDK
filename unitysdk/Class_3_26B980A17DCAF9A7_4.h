#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_AA0343CD5D895891;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_4_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x142A9C80)
#define CLASS_3_26B980A17DCAF9A7_4_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x142C0140)
#define CLASS_3_26B980A17DCAF9A7_4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x142C0070)
#define CLASS_3_26B980A17DCAF9A7_4__CTOR_OFFSET UNITYSDK_OFFSET(0x142C0190)
#define CLASS_3_26B980A17DCAF9A7_4___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x142C01A0)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_4_TypeDefinitionIndex = 61574;

class Class_3_26B980A17DCAF9A7_4 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::Class_1_AA0343CD5D895891* Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_4__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7_4* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7_4*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_4_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_4_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_4_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_4___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
