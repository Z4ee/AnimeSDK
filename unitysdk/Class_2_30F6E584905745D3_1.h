#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3_1;
class Class_1_F01FD2FEBF10FE40_1;
class Class_3_E21F6DE9B7FA4D05;

#define CLASS_2_30F6E584905745D3_1_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xEC97860)
#define CLASS_2_30F6E584905745D3_1_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xEC974A0)
#define CLASS_2_30F6E584905745D3_1_ONFINISH_OFFSET UNITYSDK_OFFSET(0xEC97750)
#define CLASS_2_30F6E584905745D3_1_ONINIT_OFFSET UNITYSDK_OFFSET(0xEC96E20)
#define CLASS_2_30F6E584905745D3_1_ONSTART_OFFSET UNITYSDK_OFFSET(0xEC97160)
#define CLASS_2_30F6E584905745D3_1_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xEC96FC0)
#define CLASS_2_30F6E584905745D3_1_ONWAITING_OFFSET UNITYSDK_OFFSET(0xEC97070)
#define CLASS_2_30F6E584905745D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xEC97A30)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xEC97AB0)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xEC97A90)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xEC97AA0)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xEC97A50)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xEC97A80)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xEC97A60)
#define CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONWAITING_OFFSET UNITYSDK_OFFSET(0xEC97A70)

inline static constexpr unsigned int Class_2_30F6E584905745D3_1_TypeDefinitionIndex = 50015;

class Class_2_30F6E584905745D3_1 : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3_1*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_0; // 0x30
	::Class_1_F01FD2FEBF10FE40_1* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONSTART_OFFSET))(this);
	}

	::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONFINISH_OFFSET))(this);
	}

	::System::Void OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1_ONCANCEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnWaiting(::RPG::GameCore::FixPoint P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONWAITING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecuting(::RPG::GameCore::FixPoint P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONEXECUTING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30F6E584905745D3_1___IFIXBASEPROXY_ONCANCEL_OFFSET))(this);
	}
};
