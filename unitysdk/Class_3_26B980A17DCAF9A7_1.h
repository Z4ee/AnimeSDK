#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_1_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x18DF74B0)
#define CLASS_3_26B980A17DCAF9A7_1_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x18DF7680)
#define CLASS_3_26B980A17DCAF9A7_1_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x18DF7530)
#define CLASS_3_26B980A17DCAF9A7_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18DF7580)
#define CLASS_3_26B980A17DCAF9A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF76D0)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_1_TypeDefinitionIndex = 65898;

class Class_3_26B980A17DCAF9A7_1 : public ::Class_2_980BB27C20DEC196
{
public:
	::Class_1_1D65C84443DC695F* IEGFCMEEEKC; // 0x28
	::UnityEngine::Vector2Int JNMBLCMFGEM; // 0x30
	::UnityEngine::Vector2Int PECPBEOHOJC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_1__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7_1* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7_1*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_1_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_1_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_1_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
