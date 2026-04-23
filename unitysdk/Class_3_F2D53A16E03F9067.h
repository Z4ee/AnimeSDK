#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_85AC304C554D1558_1;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_F2D53A16E03F9067_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DD21C0)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_646B7672F0B3276E_OFFSET UNITYSDK_OFFSET(0x11DD2590)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_6A556D7610920AA7_OFFSET UNITYSDK_OFFSET(0x11DD2810)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_8671E9AD2980095B_OFFSET UNITYSDK_OFFSET(0x11DD2920)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x11DD27A0)
#define CLASS_3_F2D53A16E03F9067_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DD2260)
#define CLASS_3_F2D53A16E03F9067_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DD2110)
#define CLASS_3_F2D53A16E03F9067_TICK_OFFSET UNITYSDK_OFFSET(0x11DD2160)
#define CLASS_3_F2D53A16E03F9067__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD20E0)
#define CLASS_3_F2D53A16E03F9067__ONTASKBEGIN_B__6_1_OFFSET UNITYSDK_OFFSET(0x11DD2AF0)
#define CLASS_3_F2D53A16E03F9067___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET UNITYSDK_OFFSET(0x11DD2B00)
#define CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DD2C70)
#define CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DD2BC0)
#define CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11DD2C10)

inline static constexpr unsigned int Class_3_F2D53A16E03F9067_TypeDefinitionIndex = 53644;

class Class_3_F2D53A16E03F9067 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_1*>
{
public:
	::RPG::Client::Promises::Promise* Field_3_1; // 0x28
	::Class_3_85AC304C554D1558_1* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_1*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_646B7672F0B3276E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_646B7672F0B3276E_OFFSET))(this);
	}

	::System::Void Method_3_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6A556D7610920AA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_6A556D7610920AA7_OFFSET))(this);
	}

	::System::Void Method_3_8671E9AD2980095B(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_8671E9AD2980095B_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067__ONTASKBEGIN_B__6_1_OFFSET))(this);
	}

	::System::Void __AsyncRequestFinishFinalAct_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
