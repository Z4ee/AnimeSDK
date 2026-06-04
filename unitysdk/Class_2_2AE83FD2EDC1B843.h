#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2AE83FD2EDC1B843_IdleLiveBattleState.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_4CFEF021C34E7902;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0xC1CE800)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC1CEE50)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_965981A2CB523A1E_OFFSET UNITYSDK_OFFSET(0xC1CF060)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xC1CED50)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_BE4C6C57CD025B5F_OFFSET UNITYSDK_OFFSET(0xC1CE920)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_DD35B17B3FD64018_OFFSET UNITYSDK_OFFSET(0xC1CF040)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_F5E2B6C15EA776A3_OFFSET UNITYSDK_OFFSET(0xC1CF050)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_FA656FDDBAF8003E_OFFSET UNITYSDK_OFFSET(0xC1CE690)
#define CLASS_2_2AE83FD2EDC1B843_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC1CEF70)
#define CLASS_2_2AE83FD2EDC1B843__CTOR_OFFSET UNITYSDK_OFFSET(0xC1CE5C0)
#define CLASS_2_2AE83FD2EDC1B843__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xC1CEFE0)
#define CLASS_2_2AE83FD2EDC1B843___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xC1CF070)

inline static constexpr unsigned int Class_2_2AE83FD2EDC1B843_TypeDefinitionIndex = 70148;

class Class_2_2AE83FD2EDC1B843 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Field_2_0; // 0x20
	::Class_1_4CFEF021C34E7902* Field_2_1; // 0x28
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Field_2_2; // 0x30
	::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState Field_2_3; // 0x38

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_2AE83FD2EDC1B843* Method_2_FA656FDDBAF8003E(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_2AE83FD2EDC1B843*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_FA656FDDBAF8003E_OFFSET))(a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_2_BE4C6C57CD025B5F()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_BE4C6C57CD025B5F_OFFSET))(this);
	}

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843__ONDESTROYED_OFFSET))(this);
	}

	::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState Method_2_DD35B17B3FD64018()
	{
		return ((::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_DD35B17B3FD64018_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Method_2_F5E2B6C15EA776A3()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_F5E2B6C15EA776A3_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Method_2_965981A2CB523A1E()
	{
		return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_965981A2CB523A1E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
	}
};
