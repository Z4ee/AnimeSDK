#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAnimatorParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_3_76DFA9776EF859AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x959D540)
#define CLASS_3_76DFA9776EF859AE_METHOD_3_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0x959D980)
#define CLASS_3_76DFA9776EF859AE_METHOD_3_DDA0364D2C57839A_OFFSET UNITYSDK_OFFSET(0x959DB60)
#define CLASS_3_76DFA9776EF859AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x959D580)
#define CLASS_3_76DFA9776EF859AE__CTOR_OFFSET UNITYSDK_OFFSET(0x959D510)
#define CLASS_3_76DFA9776EF859AE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x959DCF0)

inline static constexpr unsigned int Class_3_76DFA9776EF859AE_TypeDefinitionIndex = 51157;

class Class_3_76DFA9776EF859AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAnimatorParameter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_DDA0364D2C57839A(::UnityEngine::Animator* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE_METHOD_3_DDA0364D2C57839A_OFFSET))(this, a1);
	}

	::System::Void Method_3_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE_METHOD_3_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76DFA9776EF859AE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
