#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartMarblePVEChallengeMatch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D86E43EEEBBC472B_METHOD_3_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x8D1CCE0)
#define CLASS_3_D86E43EEEBBC472B_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x8D1CA60)
#define CLASS_3_D86E43EEEBBC472B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D1C890)
#define CLASS_3_D86E43EEEBBC472B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1C860)

inline static constexpr unsigned int Class_3_D86E43EEEBBC472B_TypeDefinitionIndex = 42331;

class Class_3_D86E43EEEBBC472B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartMarblePVEChallengeMatch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMarblePVEChallengeMatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMarblePVEChallengeMatch*))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_METHOD_3_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_3_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D86E43EEEBBC472B_METHOD_3_AF11EB02CE78B812_OFFSET))(this, a1);
	}
};
