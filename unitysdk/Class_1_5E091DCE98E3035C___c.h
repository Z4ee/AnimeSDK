#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_5;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F51D0)
#define CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149F5210)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET UNITYSDK_OFFSET(0x149F5220)
#define CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET UNITYSDK_OFFSET(0x149F5270)
#define CLASS_1_5E091DCE98E3035C___C___DELAYFORCEQUIT_B__30_0_OFFSET UNITYSDK_OFFSET(0x149F5360)

inline static constexpr unsigned int Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex = 71545;

class Class_1_5E091DCE98E3035C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_FFE5B8A52EC38E9C_5*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::Class_1_FFE5B8A52EC38E9C_5*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x649D0);
	}
	static ::Class_1_5E091DCE98E3035C___c** StaticGet___9()
	{
		return (::Class_1_5E091DCE98E3035C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x649D8);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__12_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x649E0);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E091DCE98E3035C___c_TypeDefinitionIndex)->GetStaticField(0x649E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _FinishCurBattleNodeByUserQuit_b__12_0(::Class_1_FFE5B8A52EC38E9C_5* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_5*))((::PBYTE)hIl2Cpp + CLASS_1_5E091DCE98E3035C___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET))(this, a1);
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
