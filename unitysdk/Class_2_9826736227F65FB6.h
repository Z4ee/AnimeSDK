#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_9826736227F65FB6_CLEAR_OFFSET UNITYSDK_OFFSET(0x8A83560)
#define CLASS_2_9826736227F65FB6_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x8A834F0)
#define CLASS_2_9826736227F65FB6_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8A83600)
#define CLASS_2_9826736227F65FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x8A83680)
#define CLASS_2_9826736227F65FB6___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x8A83690)
#define CLASS_2_9826736227F65FB6___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8A83720)

inline static constexpr unsigned int Class_2_9826736227F65FB6_TypeDefinitionIndex = 53494;

class Class_2_9826736227F65FB6 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6__CTOR_OFFSET))(this);
	}

	static ::Class_2_9826736227F65FB6* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_9826736227F65FB6*(*)())((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9826736227F65FB6___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
