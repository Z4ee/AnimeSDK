#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_913E58F37633BA5B_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x11055E80)
#define CLASS_2_913E58F37633BA5B_1_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x11055E10)
#define CLASS_2_913E58F37633BA5B_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11055F20)
#define CLASS_2_913E58F37633BA5B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11055FF0)
#define CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11056000)
#define CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11056090)

inline static constexpr unsigned int Class_2_913E58F37633BA5B_1_TypeDefinitionIndex = 53504;

class Class_2_913E58F37633BA5B_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Boolean Field_2_1; // 0x22
	::System::Int32 Field_2_2; // 0x24
	::System::Int32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_913E58F37633BA5B_1* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_913E58F37633BA5B_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913E58F37633BA5B_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
