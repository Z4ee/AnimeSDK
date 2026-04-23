#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_3_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x1190AD20)
#define CLASS_3_26B980A17DCAF9A7_3_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1190AB60)
#define CLASS_3_26B980A17DCAF9A7_3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1190ACD0)
#define CLASS_3_26B980A17DCAF9A7_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1190ABE0)
#define CLASS_3_26B980A17DCAF9A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1190AD70)
#define CLASS_3_26B980A17DCAF9A7_3___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1190ADE0)
#define CLASS_3_26B980A17DCAF9A7_3___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1190AD80)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_3_TypeDefinitionIndex = 60632;

class Class_3_26B980A17DCAF9A7_3 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::Class_1_1D65C84443DC695F* Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_2; // 0x30
	::UnityEngine::Vector2Int Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7_3* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7_3*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
