#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A8775AC2F5F1CDC6_IdleLiveBattleState.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_4B24D105CCEA2C22;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x92865E0)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0x9286000)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_965981A2CB523A1E_OFFSET UNITYSDK_OFFSET(0x92867F0)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x92864E0)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_A42C2C3E66C9F64C_OFFSET UNITYSDK_OFFSET(0x9286100)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_DD35B17B3FD64018_OFFSET UNITYSDK_OFFSET(0x92867D0)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_F5E2B6C15EA776A3_OFFSET UNITYSDK_OFFSET(0x92867E0)
#define CLASS_2_A8775AC2F5F1CDC6_METHOD_2_FA656FDDBAF8003E_OFFSET UNITYSDK_OFFSET(0x9285E90)
#define CLASS_2_A8775AC2F5F1CDC6_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9286700)
#define CLASS_2_A8775AC2F5F1CDC6__CTOR_OFFSET UNITYSDK_OFFSET(0x9285DC0)
#define CLASS_2_A8775AC2F5F1CDC6__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x9286770)
#define CLASS_2_A8775AC2F5F1CDC6___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x9286800)

inline static constexpr unsigned int Class_2_A8775AC2F5F1CDC6_TypeDefinitionIndex = 69336;

class Class_2_A8775AC2F5F1CDC6 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Field_2_3; // 0x20
	::Class_1_4B24D105CCEA2C22* Field_2_0; // 0x28
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Field_2_2; // 0x30
	::Class_2_A8775AC2F5F1CDC6_IdleLiveBattleState Field_2_1; // 0x38

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_A8775AC2F5F1CDC6* Method_2_FA656FDDBAF8003E(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_A8775AC2F5F1CDC6*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_FA656FDDBAF8003E_OFFSET))(a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_2_A42C2C3E66C9F64C()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_A42C2C3E66C9F64C_OFFSET))(this);
	}

	::System::Void Method_2_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_6A61469FD94C414E_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6__ONDESTROYED_OFFSET))(this);
	}

	::Class_2_A8775AC2F5F1CDC6_IdleLiveBattleState Method_2_DD35B17B3FD64018()
	{
		return ((::Class_2_A8775AC2F5F1CDC6_IdleLiveBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_DD35B17B3FD64018_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Method_2_F5E2B6C15EA776A3()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_F5E2B6C15EA776A3_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Method_2_965981A2CB523A1E()
	{
		return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6_METHOD_2_965981A2CB523A1E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8775AC2F5F1CDC6___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
	}
};
