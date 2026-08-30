#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EnableRandomTriggerAnimEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_3_5236F6B8DE768B2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA74F60)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0xBA756C0)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0xBA75420)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0xBA75540)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0xBA75050)
#define CLASS_3_5236F6B8DE768B2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA75210)
#define CLASS_3_5236F6B8DE768B2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA751C0)
#define CLASS_3_5236F6B8DE768B2B__CTOR_OFFSET UNITYSDK_OFFSET(0xBA74ED0)

inline static constexpr unsigned int Class_3_5236F6B8DE768B2B_TypeDefinitionIndex = 53022;

class Class_3_5236F6B8DE768B2B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableRandomTriggerAnimEvent*>
{
public:
	::Class_3_07C3C4D2990C49EE* MPKAFEJFNKN; // 0x28
	::System::Int32 FBKENGIJJBL; // 0x30
	::System::Single PPPPGCCDNNE; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_3_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void Method_3_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Int32 Method_3_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_D0B3EB3192C70900_OFFSET))(this);
	}
};
