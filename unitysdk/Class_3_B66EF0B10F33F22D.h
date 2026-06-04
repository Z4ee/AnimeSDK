#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class SetAdvEffectTowardAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B66EF0B10F33F22D_METHOD_3_56BA162B9EC146B9_OFFSET UNITYSDK_OFFSET(0xAF267C0)
#define CLASS_3_B66EF0B10F33F22D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF26620)
#define CLASS_3_B66EF0B10F33F22D__CTOR_OFFSET UNITYSDK_OFFSET(0xAF265F0)

inline static constexpr unsigned int Class_3_B66EF0B10F33F22D_TypeDefinitionIndex = 49741;

class Class_3_B66EF0B10F33F22D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvEffectTowardAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_B66EF0B10F33F22D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B66EF0B10F33F22D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_56BA162B9EC146B9(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_3_B66EF0B10F33F22D_METHOD_3_56BA162B9EC146B9_OFFSET))(this, a1, a2);
	}
};
