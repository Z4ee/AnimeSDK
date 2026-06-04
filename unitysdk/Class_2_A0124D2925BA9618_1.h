#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_A0124D2925BA9618_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4810A0)
#define CLASS_2_A0124D2925BA9618_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xA481030)
#define CLASS_2_A0124D2925BA9618_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA481140)
#define CLASS_2_A0124D2925BA9618_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4811D0)
#define CLASS_2_A0124D2925BA9618_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4811E0)
#define CLASS_2_A0124D2925BA9618_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA481260)

inline static constexpr unsigned int Class_2_A0124D2925BA9618_1_TypeDefinitionIndex = 61581;

class Class_2_A0124D2925BA9618_1 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_A0124D2925BA9618_1* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_A0124D2925BA9618_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0124D2925BA9618_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
