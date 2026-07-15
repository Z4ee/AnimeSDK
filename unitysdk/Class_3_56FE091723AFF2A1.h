#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialRemoveHideNodes; }

#define CLASS_3_56FE091723AFF2A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1558B890)
#define CLASS_3_56FE091723AFF2A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1558B860)

inline static constexpr unsigned int Class_3_56FE091723AFF2A1_TypeDefinitionIndex = 56193;

class Class_3_56FE091723AFF2A1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialRemoveHideNodes*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialRemoveHideNodes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialRemoveHideNodes*))((::PBYTE)hIl2Cpp + CLASS_3_56FE091723AFF2A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56FE091723AFF2A1_ONTASKBEGIN_OFFSET))(this);
	}
};
