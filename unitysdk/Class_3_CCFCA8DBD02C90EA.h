#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_23F67DD15593C8D6;
class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_CCFCA8DBD02C90EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1507AA70)
#define CLASS_3_CCFCA8DBD02C90EA_ENTER_OFFSET UNITYSDK_OFFSET(0x1507ACF0)
#define CLASS_3_CCFCA8DBD02C90EA_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1507B270)
#define CLASS_3_CCFCA8DBD02C90EA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1507AC90)
#define CLASS_3_CCFCA8DBD02C90EA_LEAVE_OFFSET UNITYSDK_OFFSET(0x1507B1F0)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_13BCC184526707CE_OFFSET UNITYSDK_OFFSET(0x1507B710)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_3D6062A0872E36D3_OFFSET UNITYSDK_OFFSET(0x1507B460)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_59A40063ED795DA9_OFFSET UNITYSDK_OFFSET(0x1507BC30)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_793AF4F1CBF9ED4C_OFFSET UNITYSDK_OFFSET(0x1507B2C0)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_83787B05DAA75579_OFFSET UNITYSDK_OFFSET(0x1507B990)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_9466492CD543BD43_OFFSET UNITYSDK_OFFSET(0x1507B3B0)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0x1507BBB0)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x1507B170)
#define CLASS_3_CCFCA8DBD02C90EA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1507B130)
#define CLASS_3_CCFCA8DBD02C90EA_TICK_OFFSET UNITYSDK_OFFSET(0x1507AC20)
#define CLASS_3_CCFCA8DBD02C90EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1507A9B0)
#define CLASS_3_CCFCA8DBD02C90EA___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0x1507C2D0)
#define CLASS_3_CCFCA8DBD02C90EA___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0x1507BE90)
#define CLASS_3_CCFCA8DBD02C90EA___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x1507C0C0)

inline static constexpr unsigned int Class_3_CCFCA8DBD02C90EA_TypeDefinitionIndex = 58415;

class Class_3_CCFCA8DBD02C90EA : public ::RPG::Client::LoginPhase
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::UnityEngine::Coroutine* Field_3_1; // 0x28
	::RPG::Client::Promises::Promise* Field_3_2; // 0x30
	::UnityEngine::Coroutine* Field_3_3; // 0x38
	::Class_1_23F67DD15593C8D6* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_ENTER_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_793AF4F1CBF9ED4C()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_793AF4F1CBF9ED4C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_9466492CD543BD43()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_9466492CD543BD43_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_3D6062A0872E36D3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_3D6062A0872E36D3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_13BCC184526707CE()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_13BCC184526707CE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_83787B05DAA75579()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_83787B05DAA75579_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::System::Void Method_3_59A40063ED795DA9(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA_METHOD_3_59A40063ED795DA9_OFFSET))(this, a1);
	}

	::System::Void __InitAudioPck_b__12_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA___INITAUDIOPCK_B__12_0_OFFSET))(this, a1, a2);
	}

	::System::Void __InitGame_b__13_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA___INITGAME_B__13_0_OFFSET))(this, a1, a2);
	}

	::System::Void __EnableLoginButton_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCFCA8DBD02C90EA___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
	}
};
