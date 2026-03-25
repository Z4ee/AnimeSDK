#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LoadSwordTrainingProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_CBAF8F582595AEF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8869910)
#define CLASS_3_CBAF8F582595AEF6__CTOR_OFFSET UNITYSDK_OFFSET(0x88698E0)

inline static constexpr unsigned int Class_3_CBAF8F582595AEF6_TypeDefinitionIndex = 44130;

class Class_3_CBAF8F582595AEF6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LoadSwordTrainingProperty*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadSwordTrainingProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadSwordTrainingProperty*))((::PBYTE)hIl2Cpp + CLASS_3_CBAF8F582595AEF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBAF8F582595AEF6_ONTASKBEGIN_OFFSET))(this);
	}
};
