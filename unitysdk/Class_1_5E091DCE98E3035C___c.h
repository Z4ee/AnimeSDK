#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_5;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9F26F0)
#define CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F2730)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET UNITYSDK_OFFSET(0xA9F2740)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET UNITYSDK_OFFSET(0xA9F2790)
#define CLASS_1_5E091DCE98E3035C___C___DELAYFORCEQUIT_B__30_0_OFFSET UNITYSDK_OFFSET(0xA9F2880)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex = 70022;

class Class_1_5E091DCE98E3035C___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Exception*>** StaticGet___9__12_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x687D0);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x687D8);
	}
	static ::Class_1_5E091DCE98E3035C___c** StaticGet___9()
	{
		return (::Class_1_5E091DCE98E3035C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x687E0);
	}
	static ::System::Func_2<::Class_1_BB4B99DE4C2501EC_5*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_BB4B99DE4C2501EC_5*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x687E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _FinishCurBattleNodeByUserQuit_b__12_0(::Class_1_BB4B99DE4C2501EC_5* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET))(this, a1);
	}

	::System::Void _FinishCurBattleNodeByUserQuit_b__12_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET))(this, a1);
	}

	::System::Void __DelayForceQuit_b__30_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C___DELAYFORCEQUIT_B__30_0_OFFSET))(this);
	}
};
