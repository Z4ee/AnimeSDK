#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"

namespace System { class Action; }

#define CLASS_3_C209538EA7244465_METHOD_3_D448AAEAD320FD71_OFFSET UNITYSDK_OFFSET(0x8C25970)
#define CLASS_3_C209538EA7244465_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8C25A70)
#define CLASS_3_C209538EA7244465_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8C259F0)
#define CLASS_3_C209538EA7244465__CTOR_OFFSET UNITYSDK_OFFSET(0x8C25AE0)
#define CLASS_3_C209538EA7244465___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x8C25B50)
#define CLASS_3_C209538EA7244465___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8C25AF0)

inline static constexpr unsigned int Class_3_C209538EA7244465_TypeDefinitionIndex = 63619;

class Class_3_C209538EA7244465 : public ::Class_2_A45A3A893E113CFD
{
public:
	::System::Action* Field_3_0; // 0x20

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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C209538EA7244465___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
