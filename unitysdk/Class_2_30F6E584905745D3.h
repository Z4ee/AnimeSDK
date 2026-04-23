#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3;
class Class_1_F01FD2FEBF10FE40_1;
class Class_3_E21F6DE9B7FA4D05;

#define CLASS_2_30F6E584905745D3_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xBAD1BA0)
#define CLASS_2_30F6E584905745D3_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xBAD1870)
#define CLASS_2_30F6E584905745D3_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBAD1B20)
#define CLASS_2_30F6E584905745D3_ONINIT_OFFSET UNITYSDK_OFFSET(0xBAD11E0)
#define CLASS_2_30F6E584905745D3_ONSTART_OFFSET UNITYSDK_OFFSET(0xBAD1520)
#define CLASS_2_30F6E584905745D3_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBAD1380)
#define CLASS_2_30F6E584905745D3_ONWAITING_OFFSET UNITYSDK_OFFSET(0xBAD1430)
#define CLASS_2_30F6E584905745D3__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD1C60)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xBAD1D50)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xBAD1CC0)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBAD1CD0)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xBAD1C80)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xBAD1CB0)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBAD1C90)
#define CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONWAITING_OFFSET UNITYSDK_OFFSET(0xBAD1CA0)

inline static constexpr unsigned int Class_2_30F6E584905745D3_TypeDefinitionIndex = 50013;

class Class_2_30F6E584905745D3 : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_1; // 0x30
	::Class_1_F01FD2FEBF10FE40_1* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONSTART_OFFSET))(this);
	}

	::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONFINISH_OFFSET))(this);
	}

	::System::Void OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_ONCANCEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnWaiting(::RPG::GameCore::FixPoint P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONWAITING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecuting(::RPG::GameCore::FixPoint P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONEXECUTING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3___IFIXBASEPROXY_ONCANCEL_OFFSET))(this);
	}
};
