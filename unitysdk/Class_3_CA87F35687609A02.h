#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAnimatorState; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_3_CA87F35687609A02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA52D30)
#define CLASS_3_CA87F35687609A02_METHOD_3_28ACD069B2AF029A_OFFSET UNITYSDK_OFFSET(0x1AA52EC0)
#define CLASS_3_CA87F35687609A02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA52D70)
#define CLASS_3_CA87F35687609A02__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA52D00)

inline static constexpr unsigned int Class_3_CA87F35687609A02_TypeDefinitionIndex = 55680;

class Class_3_CA87F35687609A02 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAnimatorState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + CLASS_3_CA87F35687609A02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA87F35687609A02_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA87F35687609A02_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_28ACD069B2AF029A(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_CA87F35687609A02_METHOD_3_28ACD069B2AF029A_OFFSET))(this, a1);
	}
};
