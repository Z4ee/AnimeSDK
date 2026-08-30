#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3;
class Class_1_F9FBCC956DFCF137_4;
class Class_3_07C3C4D2990C49EE;

#define CLASS_2_4CAE8F76E4337F12_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x163E79A0)
#define CLASS_2_4CAE8F76E4337F12_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0x163E7660)
#define CLASS_2_4CAE8F76E4337F12_ONFINISH_OFFSET UNITYSDK_OFFSET(0x163E7920)
#define CLASS_2_4CAE8F76E4337F12_ONINIT_OFFSET UNITYSDK_OFFSET(0x163E6E20)
#define CLASS_2_4CAE8F76E4337F12_ONSTART_OFFSET UNITYSDK_OFFSET(0x163E72B0)
#define CLASS_2_4CAE8F76E4337F12_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x163E6FC0)
#define CLASS_2_4CAE8F76E4337F12_ONWAITING_OFFSET UNITYSDK_OFFSET(0x163E70D0)
#define CLASS_2_4CAE8F76E4337F12__CTOR_OFFSET UNITYSDK_OFFSET(0x163E7A60)

inline static constexpr unsigned int Class_2_4CAE8F76E4337F12_TypeDefinitionIndex = 54446;

class Class_2_4CAE8F76E4337F12 : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3*>
{
public:
	::Class_1_F9FBCC956DFCF137_4* JJAFBMEKPKH; // 0x30
	::Class_3_07C3C4D2990C49EE* PFJJIEBFFNL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnWaiting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONWAITING_OFFSET))(this, a1);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONSTART_OFFSET))(this);
	}

	::System::Void OnExecuting(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONEXECUTING_OFFSET))(this, a1);
	}

	::System::Void OnFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONFINISH_OFFSET))(this);
	}

	::System::Void OnCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CAE8F76E4337F12_ONCANCEL_OFFSET))(this);
	}
};
