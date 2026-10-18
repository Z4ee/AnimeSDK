#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6AF265B57C1DDED9;
class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_CD452E6D5BD70D73_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD7FF60)
#define CLASS_3_CD452E6D5BD70D73_ENTER_OFFSET UNITYSDK_OFFSET(0xBD80180)
#define CLASS_3_CD452E6D5BD70D73_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBD80700)
#define CLASS_3_CD452E6D5BD70D73_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBD80120)
#define CLASS_3_CD452E6D5BD70D73_LEAVE_OFFSET UNITYSDK_OFFSET(0xBD80680)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_3B37859F426D7BB8_OFFSET UNITYSDK_OFFSET(0xBD808F0)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_55D65387EB4A9912_OFFSET UNITYSDK_OFFSET(0xBD80BC0)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_59A40063ED795DA9_OFFSET UNITYSDK_OFFSET(0xBD810B0)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_793AF4F1CBF9ED4C_OFFSET UNITYSDK_OFFSET(0xBD80750)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_83787B05DAA75579_OFFSET UNITYSDK_OFFSET(0xBD80E10)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_9466492CD543BD43_OFFSET UNITYSDK_OFFSET(0xBD80840)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0xBD81030)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xBD80600)
#define CLASS_3_CD452E6D5BD70D73_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD805C0)
#define CLASS_3_CD452E6D5BD70D73_TICK_OFFSET UNITYSDK_OFFSET(0xBD800B0)
#define CLASS_3_CD452E6D5BD70D73__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7FDB0)
#define CLASS_3_CD452E6D5BD70D73___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0xBD81590)
#define CLASS_3_CD452E6D5BD70D73___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0xBD81310)
#define CLASS_3_CD452E6D5BD70D73___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0xBD81460)

inline static constexpr unsigned int Class_3_CD452E6D5BD70D73_TypeDefinitionIndex = 61150;

class Class_3_CD452E6D5BD70D73 : public ::RPG::Client::LoginPhase
{
public:
	// static const ::System::Single EPAFNFAHKJC; // 0x0
	::Class_1_6AF265B57C1DDED9* PCOMMLHHNOA; // 0x28
	::UnityEngine::Coroutine* MBNHHJDLHFI; // 0x30
	::UnityEngine::Coroutine* NNHJIAKEKBG; // 0x38
	::RPG::Client::Promises::Promise* LOIMNCDDIJP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_ENTER_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_793AF4F1CBF9ED4C()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_793AF4F1CBF9ED4C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_9466492CD543BD43()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_9466492CD543BD43_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_3B37859F426D7BB8()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_3B37859F426D7BB8_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_55D65387EB4A9912()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_55D65387EB4A9912_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_83787B05DAA75579()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_83787B05DAA75579_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::System::Void Method_3_59A40063ED795DA9(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73_METHOD_3_59A40063ED795DA9_OFFSET))(this, a1);
	}

	::System::Void __InitAudioPck_b__12_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73___INITAUDIOPCK_B__12_0_OFFSET))(this, a1, a2);
	}

	::System::Void __InitGame_b__13_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73___INITGAME_B__13_0_OFFSET))(this, a1, a2);
	}

	::System::Void __EnableLoginButton_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD452E6D5BD70D73___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
	}
};
