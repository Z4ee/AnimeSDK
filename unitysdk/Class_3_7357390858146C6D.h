#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetAdvEffectToAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7357390858146C6D_METHOD_3_1BAA3AF3108CCD4B_OFFSET UNITYSDK_OFFSET(0x158689A0)
#define CLASS_3_7357390858146C6D_METHOD_3_4FF016B805347AFA_OFFSET UNITYSDK_OFFSET(0x15868BB0)
#define CLASS_3_7357390858146C6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15868670)
#define CLASS_3_7357390858146C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x15868640)

inline static constexpr unsigned int Class_3_7357390858146C6D_TypeDefinitionIndex = 53476;

class Class_3_7357390858146C6D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvEffectToAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_7357390858146C6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7357390858146C6D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4FF016B805347AFA(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2, ::RPG::GameCore::AnchorInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_3_7357390858146C6D_METHOD_3_4FF016B805347AFA_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AnchorInfo* Method_3_1BAA3AF3108CCD4B(::RPG::GameCore::DynamicString* a1)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + CLASS_3_7357390858146C6D_METHOD_3_1BAA3AF3108CCD4B_OFFSET))(this, a1);
	}
};
