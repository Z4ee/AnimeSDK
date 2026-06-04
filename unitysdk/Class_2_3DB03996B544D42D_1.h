#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3_1;
class Class_1_F9FBCC956DFCF137_4;
class Class_3_07C3C4D2990C49EE;

#define CLASS_2_3DB03996B544D42D_1_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xAD299B0)
#define CLASS_2_3DB03996B544D42D_1_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xAD295E0)
#define CLASS_2_3DB03996B544D42D_1_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAD298A0)
#define CLASS_2_3DB03996B544D42D_1_ONINIT_OFFSET UNITYSDK_OFFSET(0xAD28F20)
#define CLASS_2_3DB03996B544D42D_1_ONSTART_OFFSET UNITYSDK_OFFSET(0xAD292A0)
#define CLASS_2_3DB03996B544D42D_1_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xAD290C0)
#define CLASS_2_3DB03996B544D42D_1_ONWAITING_OFFSET UNITYSDK_OFFSET(0xAD29170)
#define CLASS_2_3DB03996B544D42D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAD29B90)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xAD29C10)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xAD29BF0)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAD29C00)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xAD29BB0)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xAD29BE0)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xAD29BC0)
#define CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONWAITING_OFFSET UNITYSDK_OFFSET(0xAD29BD0)

inline static constexpr unsigned int Class_2_3DB03996B544D42D_1_TypeDefinitionIndex = 50682;

class Class_2_3DB03996B544D42D_1 : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3_1*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x30
	::Class_1_F9FBCC956DFCF137_4* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONSTART_OFFSET))(this);
	}

	::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONFINISH_OFFSET))(this);
	}

	::System::Void OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1_ONCANCEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_1___IFIXBASEPROXY_ONCANCEL_OFFSET))(this);
	}
};
