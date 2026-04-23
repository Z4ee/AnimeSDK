#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_76296DB53CE410AC_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xAA53350)
#define CLASS_3_76296DB53CE410AC_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xAA53200)
#define CLASS_3_76296DB53CE410AC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAA53280)
#define CLASS_3_76296DB53CE410AC__CTOR_OFFSET UNITYSDK_OFFSET(0xAA533A0)
#define CLASS_3_76296DB53CE410AC___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xAA533B0)

inline static constexpr unsigned int Class_3_76296DB53CE410AC_TypeDefinitionIndex = 60642;

class Class_3_76296DB53CE410AC : public ::Class_2_E408E6D7F3D1822C
{
public:
	::Class_1_1D65C84443DC695F* Field_3_1; // 0x28
	::System::Boolean Field_3_2; // 0x30
	::UnityEngine::Vector2Int Field_3_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC__CTOR_OFFSET))(this);
	}

	static ::Class_3_76296DB53CE410AC* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_76296DB53CE410AC*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
