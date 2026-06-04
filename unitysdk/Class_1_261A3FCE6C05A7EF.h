#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_261A3FCE6C05A7EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9F2D80)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_0C70DE8D34C1B721_OFFSET UNITYSDK_OFFSET(0xA9F94F0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xA9F2BC0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_9AD9B5D2A67D4172_OFFSET UNITYSDK_OFFSET(0xA9F1B80)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0xA9F95D0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_1_OFFSET UNITYSDK_OFFSET(0xA9F9B60)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_OFFSET UNITYSDK_OFFSET(0xA9F9840)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_DC86D0F4A2E388C7_OFFSET UNITYSDK_OFFSET(0xA9F92E0)
#define CLASS_1_261A3FCE6C05A7EF__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F1AC0)
#define CLASS_1_261A3FCE6C05A7EF___SENDSTARTBATTLEREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xA9F9E70)
#define CLASS_1_261A3FCE6C05A7EF___SENDSTARTNODEREQ_B__7_0_OFFSET UNITYSDK_OFFSET(0xA9F9DA0)

inline static constexpr unsigned int Class_1_261A3FCE6C05A7EF_TypeDefinitionIndex = 70009;

class Class_1_261A3FCE6C05A7EF : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::RPG::Client::ActivityIdleLive::StoryLine* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*&))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_9AD9B5D2A67D4172(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_9AD9B5D2A67D4172_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_0C70DE8D34C1B721(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_0C70DE8D34C1B721_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_DC86D0F4A2E388C7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_DC86D0F4A2E388C7_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_AB7C33B8F73A125A()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_AB7C33B8F73A125A_OFFSET))(this);
	}

	::System::Void Method_1_CE74B05EA918B9A4(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE74B05EA918B9A4_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_DISPOSE_OFFSET))(this);
	}

	::System::Void __SendStartNodeReq_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF___SENDSTARTNODEREQ_B__7_0_OFFSET))(this);
	}

	::System::Void __SendStartBattleReq_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF___SENDSTARTBATTLEREQ_B__8_0_OFFSET))(this);
	}
};
