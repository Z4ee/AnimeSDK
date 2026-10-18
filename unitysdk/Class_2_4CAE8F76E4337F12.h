#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtInsertAction_1.h"

class Class_1_F01C2A4F5E8F10C3;
class Class_1_F9FBCC956DFCF137_3;
class Class_3_07C3C4D2990C49EE;

#define CLASS_2_4CAE8F76E4337F12_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xC21D8B0)
#define CLASS_2_4CAE8F76E4337F12_ONEXECUTING_OFFSET UNITYSDK_OFFSET(0xC21D570)
#define CLASS_2_4CAE8F76E4337F12_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC21D830)
#define CLASS_2_4CAE8F76E4337F12_ONINIT_OFFSET UNITYSDK_OFFSET(0xC21CD30)
#define CLASS_2_4CAE8F76E4337F12_ONSTART_OFFSET UNITYSDK_OFFSET(0xC21D1C0)
#define CLASS_2_4CAE8F76E4337F12_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC21CED0)
#define CLASS_2_4CAE8F76E4337F12_ONWAITING_OFFSET UNITYSDK_OFFSET(0xC21CFE0)
#define CLASS_2_4CAE8F76E4337F12__CTOR_OFFSET UNITYSDK_OFFSET(0xC21D970)

inline static constexpr unsigned int Class_2_4CAE8F76E4337F12_TypeDefinitionIndex = 54232;

class Class_2_4CAE8F76E4337F12 : public ::RPG::GameCore::RtInsertAction_1<::Class_1_F01C2A4F5E8F10C3*>
{
public:
	::Class_3_07C3C4D2990C49EE* PFJJIEBFFNL; // 0x30
	::Class_1_F9FBCC956DFCF137_3* JJAFBMEKPKH; // 0x38

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
