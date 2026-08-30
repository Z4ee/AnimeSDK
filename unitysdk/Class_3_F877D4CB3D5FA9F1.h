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

#define CLASS_3_F877D4CB3D5FA9F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEF5A90)
#define CLASS_3_F877D4CB3D5FA9F1_ENTER_OFFSET UNITYSDK_OFFSET(0xBEF5D70)
#define CLASS_3_F877D4CB3D5FA9F1_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBEF62F0)
#define CLASS_3_F877D4CB3D5FA9F1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBEF5D10)
#define CLASS_3_F877D4CB3D5FA9F1_LEAVE_OFFSET UNITYSDK_OFFSET(0xBEF6270)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_13BCC184526707CE_OFFSET UNITYSDK_OFFSET(0xBEF67B0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3B37859F426D7BB8_OFFSET UNITYSDK_OFFSET(0xBEF64E0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_59A40063ED795DA9_OFFSET UNITYSDK_OFFSET(0xBEF6CD0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_793AF4F1CBF9ED4C_OFFSET UNITYSDK_OFFSET(0xBEF6340)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_83787B05DAA75579_OFFSET UNITYSDK_OFFSET(0xBEF6A30)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_9466492CD543BD43_OFFSET UNITYSDK_OFFSET(0xBEF6430)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0xBEF6C50)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xBEF61F0)
#define CLASS_3_F877D4CB3D5FA9F1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEF61B0)
#define CLASS_3_F877D4CB3D5FA9F1_TICK_OFFSET UNITYSDK_OFFSET(0xBEF5CA0)
#define CLASS_3_F877D4CB3D5FA9F1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF59C0)
#define CLASS_3_F877D4CB3D5FA9F1___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0xBEF73E0)
#define CLASS_3_F877D4CB3D5FA9F1___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0xBEF6F40)
#define CLASS_3_F877D4CB3D5FA9F1___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0xBEF71A0)

inline static constexpr unsigned int Class_3_F877D4CB3D5FA9F1_TypeDefinitionIndex = 61245;

class Class_3_F877D4CB3D5FA9F1 : public ::RPG::Client::LoginPhase
{
public:
	// static const ::System::Single EPAFNFAHKJC; // 0x0
	::RPG::Client::Promises::Promise* LOIMNCDDIJP; // 0x28
	::UnityEngine::Coroutine* MBNHHJDLHFI; // 0x30
	::UnityEngine::Coroutine* NNHJIAKEKBG; // 0x38
	::Class_1_23F67DD15593C8D6* PCOMMLHHNOA; // 0x40

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

	::RPG::Client::Promises::IPromise* Method_3_3B37859F426D7BB8()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_3B37859F426D7BB8_OFFSET))(this);
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

	::System::Void Method_3_59A40063ED795DA9(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_F877D4CB3D5FA9F1_METHOD_3_59A40063ED795DA9_OFFSET))(this, a1);
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
