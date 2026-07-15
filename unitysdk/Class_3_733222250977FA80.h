#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMiniEmoEffect; }

#define CLASS_3_733222250977FA80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146FE590)
#define CLASS_3_733222250977FA80_METHOD_3_A0950880B19D72C8_OFFSET UNITYSDK_OFFSET(0x146FEBD0)
#define CLASS_3_733222250977FA80_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146FE5D0)
#define CLASS_3_733222250977FA80__CTOR_OFFSET UNITYSDK_OFFSET(0x146FE560)

inline static constexpr unsigned int Class_3_733222250977FA80_TypeDefinitionIndex = 53218;

class Class_3_733222250977FA80 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerMiniEmoEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_733222250977FA80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_733222250977FA80_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_733222250977FA80_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_A0950880B19D72C8(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_733222250977FA80_METHOD_3_A0950880B19D72C8_OFFSET))(this, a1, a2);
	}
};
