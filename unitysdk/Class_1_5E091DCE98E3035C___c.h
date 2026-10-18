#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_7;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC18260)
#define CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC182A0)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET UNITYSDK_OFFSET(0xBC182B0)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET UNITYSDK_OFFSET(0xBC18300)
#define CLASS_1_5E091DCE98E3035C___C___DELAYFORCEQUIT_B__30_0_OFFSET UNITYSDK_OFFSET(0xBC183F0)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex = 75151;

class Class_1_5E091DCE98E3035C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_FFE5B8A52EC38E9C_7*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_FFE5B8A52EC38E9C_7*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x3F450);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x3F458);
	}
	static ::Class_1_5E091DCE98E3035C___c** StaticGet___9()
	{
		return (::Class_1_5E091DCE98E3035C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x3F460);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__12_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x3F468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _FinishCurBattleNodeByUserQuit_b__12_0(::Class_1_FFE5B8A52EC38E9C_7* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_7*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET))(this, a1);
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
