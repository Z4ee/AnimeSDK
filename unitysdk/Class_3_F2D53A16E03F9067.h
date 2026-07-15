#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_A406659BC3B2A585_2;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_F2D53A16E03F9067_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F34EF0)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0x15F355E0)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_1624A21F337DA915_OFFSET UNITYSDK_OFFSET(0x15F35710)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_AB7C33B8F73A125A_OFFSET UNITYSDK_OFFSET(0x15F35340)
#define CLASS_3_F2D53A16E03F9067_METHOD_3_FB92C5E10C2076F0_OFFSET UNITYSDK_OFFSET(0x15F35570)
#define CLASS_3_F2D53A16E03F9067_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F34FB0)
#define CLASS_3_F2D53A16E03F9067_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F34E40)
#define CLASS_3_F2D53A16E03F9067_TICK_OFFSET UNITYSDK_OFFSET(0x15F34E90)
#define CLASS_3_F2D53A16E03F9067__CTOR_OFFSET UNITYSDK_OFFSET(0x15F34E10)
#define CLASS_3_F2D53A16E03F9067__ONTASKBEGIN_B__6_1_OFFSET UNITYSDK_OFFSET(0x15F35900)
#define CLASS_3_F2D53A16E03F9067___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET UNITYSDK_OFFSET(0x15F35910)

inline static constexpr unsigned int Class_3_F2D53A16E03F9067_TypeDefinitionIndex = 55580;

class Class_3_F2D53A16E03F9067 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_2*>
{
public:
	::Class_3_A406659BC3B2A585_2* Field_3_0; // 0x28
	::RPG::Client::Promises::Promise* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_2*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067__CTOR_OFFSET))(this, a1, a2);
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

	::RPG::Client::Promises::IPromise* Method_3_AB7C33B8F73A125A()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_AB7C33B8F73A125A_OFFSET))(this);
	}

	::System::Void Method_3_FB92C5E10C2076F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_FB92C5E10C2076F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void Method_3_1624A21F337DA915(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067_METHOD_3_1624A21F337DA915_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067__ONTASKBEGIN_B__6_1_OFFSET))(this);
	}

	::System::Void __AsyncRequestFinishFinalAct_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET))(this);
	}
};
