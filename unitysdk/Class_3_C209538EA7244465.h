#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"

namespace System { class Action; }

#define CLASS_3_C209538EA7244465_METHOD_3_D448AAEAD320FD71_OFFSET UNITYSDK_OFFSET(0x19548270)
#define CLASS_3_C209538EA7244465_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x19548370)
#define CLASS_3_C209538EA7244465_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x195482F0)
#define CLASS_3_C209538EA7244465__CTOR_OFFSET UNITYSDK_OFFSET(0x195483E0)

inline static constexpr unsigned int Class_3_C209538EA7244465_TypeDefinitionIndex = 77690;

class Class_3_C209538EA7244465 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::System::Action* PEIHJAEIGHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465__CTOR_OFFSET))(this);
	}

	static ::Class_3_C209538EA7244465* Method_3_D448AAEAD320FD71(::System::Action* a1)
	{
		return ((::Class_3_C209538EA7244465*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465_METHOD_3_D448AAEAD320FD71_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465_ONCLEAR_OFFSET))(this);
	}
};
