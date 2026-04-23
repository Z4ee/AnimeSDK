#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_261A3FCE6C05A7EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA91310)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_2A68878D2168C325_OFFSET UNITYSDK_OFFSET(0xAA90600)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_587FCC516EA2B85C_OFFSET UNITYSDK_OFFSET(0xAA908D0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xAA90990)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0xAA90B50)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_1_OFFSET UNITYSDK_OFFSET(0xAA910D0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_CE74B05EA918B9A4_OFFSET UNITYSDK_OFFSET(0xAA90DB0)
#define CLASS_1_261A3FCE6C05A7EF_METHOD_1_DC86D0F4A2E388C7_OFFSET UNITYSDK_OFFSET(0xAA906D0)
#define CLASS_1_261A3FCE6C05A7EF__CTOR_OFFSET UNITYSDK_OFFSET(0xAA90560)
#define CLASS_1_261A3FCE6C05A7EF___SENDSTARTBATTLEREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xAA91590)
#define CLASS_1_261A3FCE6C05A7EF___SENDSTARTNODEREQ_B__7_0_OFFSET UNITYSDK_OFFSET(0xAA914C0)

inline static constexpr unsigned int Class_1_261A3FCE6C05A7EF_TypeDefinitionIndex = 69197;

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

	::RPG::Client::Promises::IPromise* Method_1_2A68878D2168C325(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_2A68878D2168C325_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_587FCC516EA2B85C(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_261A3FCE6C05A7EF_METHOD_1_587FCC516EA2B85C_OFFSET))(this, a1);
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
