#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_29B09BA352CBE40A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164CC140)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_0B8FA6CA3D6E696A_OFFSET UNITYSDK_OFFSET(0x164D3680)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_0C70DE8D34C1B721_OFFSET UNITYSDK_OFFSET(0x164D3900)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_646B7672F0B3276E_OFFSET UNITYSDK_OFFSET(0x164D39E0)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x164CBE90)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_9AD9B5D2A67D4172_OFFSET UNITYSDK_OFFSET(0x164CADF0)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_CE74B05EA918B9A4_1_OFFSET UNITYSDK_OFFSET(0x164D3FF0)
#define CLASS_1_29B09BA352CBE40A_METHOD_1_CE74B05EA918B9A4_OFFSET UNITYSDK_OFFSET(0x164D3C20)
#define CLASS_1_29B09BA352CBE40A__CTOR_OFFSET UNITYSDK_OFFSET(0x164CAD30)
#define CLASS_1_29B09BA352CBE40A___SENDSTARTBATTLEREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0x164D4300)
#define CLASS_1_29B09BA352CBE40A___SENDSTARTNODEREQ_B__7_0_OFFSET UNITYSDK_OFFSET(0x164D4230)

inline static constexpr unsigned int Class_1_29B09BA352CBE40A_TypeDefinitionIndex = 74838;

class Class_1_29B09BA352CBE40A : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::StoryLine* GIOECPALNAC; // 0x10
	::RPG::Client::Promises::Promise* EGAGOICMCPA; // 0x18
	::RPG::Client::Promises::Promise* PFPPONIIGMJ; // 0x20

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*&))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_9AD9B5D2A67D4172(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_9AD9B5D2A67D4172_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C70DE8D34C1B721(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_0C70DE8D34C1B721_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_0B8FA6CA3D6E696A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_0B8FA6CA3D6E696A_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_646B7672F0B3276E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_646B7672F0B3276E_OFFSET))(this);
	}

	::System::Void Method_1_CE74B05EA918B9A4(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_CE74B05EA918B9A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE74B05EA918B9A4_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_METHOD_1_CE74B05EA918B9A4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A_DISPOSE_OFFSET))(this);
	}

	::System::Void __SendStartNodeReq_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A___SENDSTARTNODEREQ_B__7_0_OFFSET))(this);
	}

	::System::Void __SendStartBattleReq_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B09BA352CBE40A___SENDSTARTBATTLEREQ_B__8_0_OFFSET))(this);
	}
};
