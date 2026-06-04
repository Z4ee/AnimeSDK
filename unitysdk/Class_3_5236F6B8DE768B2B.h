#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EnableRandomTriggerAnimEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_3_5236F6B8DE768B2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA771D90)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xA7723E0)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xA771E20)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0xA772140)
#define CLASS_3_5236F6B8DE768B2B_METHOD_3_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0xA772260)
#define CLASS_3_5236F6B8DE768B2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA771F70)
#define CLASS_3_5236F6B8DE768B2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA771F20)
#define CLASS_3_5236F6B8DE768B2B__CTOR_OFFSET UNITYSDK_OFFSET(0xA771D00)
#define CLASS_3_5236F6B8DE768B2B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA772500)
#define CLASS_3_5236F6B8DE768B2B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA772510)

inline static constexpr unsigned int Class_3_5236F6B8DE768B2B_TypeDefinitionIndex = 49344;

class Class_3_5236F6B8DE768B2B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableRandomTriggerAnimEvent*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::System::Int32 Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x34

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

	::System::Void Method_3_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_3_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void Method_3_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Int32 Method_3_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B_METHOD_3_D0B3EB3192C70900_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5236F6B8DE768B2B___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
