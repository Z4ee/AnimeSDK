#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_D2AB713D385CFBA2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x11F08F90)
#define CLASS_3_D2AB713D385CFBA2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11F09010)
#define CLASS_3_D2AB713D385CFBA2__CTOR_OFFSET UNITYSDK_OFFSET(0x11F09070)
#define CLASS_3_D2AB713D385CFBA2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11F09080)

inline static constexpr unsigned int Class_3_D2AB713D385CFBA2_TypeDefinitionIndex = 60654;

class Class_3_D2AB713D385CFBA2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2AB713D385CFBA2__CTOR_OFFSET))(this);
	}

	static ::Class_3_D2AB713D385CFBA2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_D2AB713D385CFBA2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_D2AB713D385CFBA2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2AB713D385CFBA2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2AB713D385CFBA2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
