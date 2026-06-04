#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3;
class Class_1_F9FBCC956DFCF137_4;
class Class_3_07C3C4D2990C49EE;

#define CLASS_2_3DB03996B544D42D_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xAEEF930)
#define CLASS_2_3DB03996B544D42D_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xAEEF5F0)
#define CLASS_2_3DB03996B544D42D_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAEEF8B0)
#define CLASS_2_3DB03996B544D42D_ONINIT_OFFSET UNITYSDK_OFFSET(0xAEEEF20)
#define CLASS_2_3DB03996B544D42D_ONSTART_OFFSET UNITYSDK_OFFSET(0xAEEF2A0)
#define CLASS_2_3DB03996B544D42D_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xAEEF0C0)
#define CLASS_2_3DB03996B544D42D_ONWAITING_OFFSET UNITYSDK_OFFSET(0xAEEF170)
#define CLASS_2_3DB03996B544D42D__CTOR_OFFSET UNITYSDK_OFFSET(0xAEEF9F0)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xAEEFAE0)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xAEEFA50)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0xAEEFA60)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xAEEFA10)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xAEEFA40)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xAEEFA20)
#define CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONWAITING_OFFSET UNITYSDK_OFFSET(0xAEEFA30)

inline static constexpr unsigned int Class_2_3DB03996B544D42D_TypeDefinitionIndex = 50680;

class Class_2_3DB03996B544D42D : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3*>
{
public:
	::Class_1_F9FBCC956DFCF137_4* Field_2_0; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONSTART_OFFSET))(this);
	}

	::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONFINISH_OFFSET))(this);
	}

	::System::Void OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D_ONCANCEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB03996B544D42D___IFIXBASEPROXY_ONCANCEL_OFFSET))(this);
	}
};
