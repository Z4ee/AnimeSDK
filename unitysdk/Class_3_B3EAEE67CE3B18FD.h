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

#define CLASS_3_B3EAEE67CE3B18FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116F0AD0)
#define CLASS_3_B3EAEE67CE3B18FD_ENTER_OFFSET UNITYSDK_OFFSET(0x116F0D50)
#define CLASS_3_B3EAEE67CE3B18FD_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x116F1230)
#define CLASS_3_B3EAEE67CE3B18FD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x116F0CF0)
#define CLASS_3_B3EAEE67CE3B18FD_LEAVE_OFFSET UNITYSDK_OFFSET(0x116F11B0)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_13BCC184526707CE_OFFSET UNITYSDK_OFFSET(0x116F1680)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_73EFCBAD9F7B0B8C_OFFSET UNITYSDK_OFFSET(0x116F1370)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_7F19B4508343E427_OFFSET UNITYSDK_OFFSET(0x116F1B50)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_84A69027CC95FACF_OFFSET UNITYSDK_OFFSET(0x116F1280)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_A494375A891E37F7_OFFSET UNITYSDK_OFFSET(0x116F18E0)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0x116F1AD0)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x116F1130)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_C1F24DF89DD4EFCA_OFFSET UNITYSDK_OFFSET(0x116F1400)
#define CLASS_3_B3EAEE67CE3B18FD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116F10F0)
#define CLASS_3_B3EAEE67CE3B18FD_TICK_OFFSET UNITYSDK_OFFSET(0x116F0C80)
#define CLASS_3_B3EAEE67CE3B18FD__CTOR_OFFSET UNITYSDK_OFFSET(0x116F0A10)
#define CLASS_3_B3EAEE67CE3B18FD___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0x116F2160)
#define CLASS_3_B3EAEE67CE3B18FD___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0x116F1D60)
#define CLASS_3_B3EAEE67CE3B18FD___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x116F1F70)

inline static constexpr unsigned int Class_3_B3EAEE67CE3B18FD_TypeDefinitionIndex = 49573;

class Class_3_B3EAEE67CE3B18FD : public ::RPG::Client::LoginPhase
{
public:
	// static const ::System::Single Field_3_1; // 0x0
	::RPG::Client::Promises::Promise* Field_3_3; // 0x28
	::UnityEngine::Coroutine* Field_3_4; // 0x30
	::UnityEngine::Coroutine* Field_3_2; // 0x38
	::Class_1_23F67DD15593C8D6* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_ENTER_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_BB93C69D78C65A48_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_84A69027CC95FACF()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_84A69027CC95FACF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_73EFCBAD9F7B0B8C()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_73EFCBAD9F7B0B8C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_C1F24DF89DD4EFCA()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_C1F24DF89DD4EFCA_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_13BCC184526707CE()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_13BCC184526707CE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_A494375A891E37F7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_A494375A891E37F7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_3_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::System::Void Method_3_7F19B4508343E427(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD_METHOD_3_7F19B4508343E427_OFFSET))(this, a1);
	}

	::System::Void __InitAudioPck_b__12_0(::System::Action* resolve, ::System::Action_1<::System::Exception*>* reject)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___INITAUDIOPCK_B__12_0_OFFSET))(this, resolve, reject);
	}

	::System::Void __InitGame_b__13_0(::System::Action* resolve, ::System::Action_1<::System::Exception*>* reject)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___INITGAME_B__13_0_OFFSET))(this, resolve, reject);
	}

	::System::Void __EnableLoginButton_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EAEE67CE3B18FD___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
	}
};
