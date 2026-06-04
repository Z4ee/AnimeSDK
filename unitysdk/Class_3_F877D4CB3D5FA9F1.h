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

#define CLASS_3_F877D4CB3D5FA9F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB23A90)
#define CLASS_3_F877D4CB3D5FA9F1_ENTER_OFFSET UNITYSDK_OFFSET(0xAB23D70)
#define CLASS_3_F877D4CB3D5FA9F1_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xAB242F0)
#define CLASS_3_F877D4CB3D5FA9F1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB23D10)
#define CLASS_3_F877D4CB3D5FA9F1_LEAVE_OFFSET UNITYSDK_OFFSET(0xAB24270)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_13BCC184526707CE_OFFSET UNITYSDK_OFFSET(0xAB24790)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3078B0F45A6E7DE0_OFFSET UNITYSDK_OFFSET(0xAB24CB0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3D6062A0872E36D3_OFFSET UNITYSDK_OFFSET(0xAB244E0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_793AF4F1CBF9ED4C_OFFSET UNITYSDK_OFFSET(0xAB24340)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_83787B05DAA75579_OFFSET UNITYSDK_OFFSET(0xAB24A10)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_9466492CD543BD43_OFFSET UNITYSDK_OFFSET(0xAB24430)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0xAB24C30)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xAB241F0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB241B0)
#define CLASS_3_F877D4CB3D5FA9F1_TICK_OFFSET UNITYSDK_OFFSET(0xAB23CA0)
#define CLASS_3_F877D4CB3D5FA9F1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB239C0)
#define CLASS_3_F877D4CB3D5FA9F1___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0xAB25360)
#define CLASS_3_F877D4CB3D5FA9F1___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0xAB24EC0)
#define CLASS_3_F877D4CB3D5FA9F1___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0xAB25120)

inline static constexpr unsigned int Class_3_F877D4CB3D5FA9F1_TypeDefinitionIndex = 57157;

class Class_3_F877D4CB3D5FA9F1 : public ::RPG::Client::LoginPhase
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_1_23F67DD15593C8D6* Field_3_1; // 0x28
	::UnityEngine::Coroutine* Field_3_2; // 0x30
	::RPG::Client::Promises::Promise* Field_3_3; // 0x38
	::UnityEngine::Coroutine* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_ENTER_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_793AF4F1CBF9ED4C()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_793AF4F1CBF9ED4C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_9466492CD543BD43()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_9466492CD543BD43_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_3D6062A0872E36D3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3D6062A0872E36D3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_13BCC184526707CE()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_13BCC184526707CE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_83787B05DAA75579()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_83787B05DAA75579_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::System::Void Method_3_3078B0F45A6E7DE0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3078B0F45A6E7DE0_OFFSET))(this, a1);
	}

	::System::Void __InitAudioPck_b__12_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___INITAUDIOPCK_B__12_0_OFFSET))(this, a1, a2);
	}

	::System::Void __InitGame_b__13_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___INITGAME_B__13_0_OFFSET))(this, a1, a2);
	}

	::System::Void __EnableLoginButton_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
	}
};
