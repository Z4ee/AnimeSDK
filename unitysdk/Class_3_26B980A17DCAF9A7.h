#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_AA0343CD5D895891;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x8F47930)
#define CLASS_3_26B980A17DCAF9A7_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x8F47790)
#define CLASS_3_26B980A17DCAF9A7_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8F478E0)
#define CLASS_3_26B980A17DCAF9A7_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8F47810)
#define CLASS_3_26B980A17DCAF9A7__CTOR_OFFSET UNITYSDK_OFFSET(0x8F47980)
#define CLASS_3_26B980A17DCAF9A7___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8F479F0)
#define CLASS_3_26B980A17DCAF9A7___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8F47990)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_TypeDefinitionIndex = 60616;

class Class_3_26B980A17DCAF9A7 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::Class_1_AA0343CD5D895891* Field_3_1; // 0x28
	::UnityEngine::Vector2Int Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
