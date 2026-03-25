#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_9826736227F65FB6_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x8AB8960)
#define CLASS_2_9826736227F65FB6_1_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x8AB88F0)
#define CLASS_2_9826736227F65FB6_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8AB8A00)
#define CLASS_2_9826736227F65FB6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB8A80)
#define CLASS_2_9826736227F65FB6_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x8AB8A90)
#define CLASS_2_9826736227F65FB6_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8AB8B20)

inline static constexpr unsigned int Class_2_9826736227F65FB6_1_TypeDefinitionIndex = 53503;

class Class_2_9826736227F65FB6_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_9826736227F65FB6_1* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_9826736227F65FB6_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
