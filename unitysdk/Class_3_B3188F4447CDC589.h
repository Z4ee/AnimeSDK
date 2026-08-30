#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class SetAdvEffectTowardAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B3188F4447CDC589_METHOD_3_AA6426DE10262FF0_OFFSET UNITYSDK_OFFSET(0xC368E50)
#define CLASS_3_B3188F4447CDC589_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC368BE0)
#define CLASS_3_B3188F4447CDC589__CTOR_OFFSET UNITYSDK_OFFSET(0xC368BB0)

inline static constexpr unsigned int Class_3_B3188F4447CDC589_TypeDefinitionIndex = 53477;

class Class_3_B3188F4447CDC589 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvEffectTowardAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_B3188F4447CDC589__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3188F4447CDC589_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AA6426DE10262FF0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_3_B3188F4447CDC589_METHOD_3_AA6426DE10262FF0_OFFSET))(this, a1, a2);
	}
};
