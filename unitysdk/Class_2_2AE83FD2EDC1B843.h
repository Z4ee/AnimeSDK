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

#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_0D0BAC0EC206E602_OFFSET UNITYSDK_OFFSET(0xD7EDB70)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_3934A3B9BB2CB89F_OFFSET UNITYSDK_OFFSET(0xD7EDB30)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0xD7ED110)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_60D157AD7796F2DC_OFFSET UNITYSDK_OFFSET(0xD7EDAF0)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xD7ED850)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD7ED950)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_DF75820F69F2E826_OFFSET UNITYSDK_OFFSET(0xD7ED230)
#define CLASS_2_2AE83FD2EDC1B843_METHOD_2_FA656FDDBAF8003E_OFFSET UNITYSDK_OFFSET(0xD7ECFA0)
#define CLASS_2_2AE83FD2EDC1B843_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD7EDA20)
#define CLASS_2_2AE83FD2EDC1B843__CTOR_OFFSET UNITYSDK_OFFSET(0xD7ECED0)
#define CLASS_2_2AE83FD2EDC1B843__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xD7EDA90)

inline static constexpr unsigned int Class_2_2AE83FD2EDC1B843_TypeDefinitionIndex = 74978;

class Class_2_2AE83FD2EDC1B843 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_4CFEF021C34E7902* HEMMHLHDGBO; // 0x20
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x28
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x30
	::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState DLNIGFGLPLJ; // 0x38

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_2AE83FD2EDC1B843* Method_2_FA656FDDBAF8003E(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_2AE83FD2EDC1B843*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_FA656FDDBAF8003E_OFFSET))(a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_2_DF75820F69F2E826()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_DF75820F69F2E826_OFFSET))(this);
	}

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843__ONDESTROYED_OFFSET))(this);
	}

	::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState Method_2_60D157AD7796F2DC()
	{
		return ((::Class_2_2AE83FD2EDC1B843_IdleLiveBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_60D157AD7796F2DC_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Method_2_3934A3B9BB2CB89F()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_3934A3B9BB2CB89F_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Method_2_0D0BAC0EC206E602()
	{
		return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE83FD2EDC1B843_METHOD_2_0D0BAC0EC206E602_OFFSET))(this);
	}
};
