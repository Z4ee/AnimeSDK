#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshAllTutorialNode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9BD604667A4B0BAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD2FFB0)
#define CLASS_3_9BD604667A4B0BAF__CTOR_OFFSET UNITYSDK_OFFSET(0xAD2FF80)

inline static constexpr unsigned int Class_3_9BD604667A4B0BAF_TypeDefinitionIndex = 53841;

class Class_3_9BD604667A4B0BAF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshAllTutorialNode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshAllTutorialNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshAllTutorialNode*))((::PBYTE)hIl2Cpp + CLASS_3_9BD604667A4B0BAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9BD604667A4B0BAF_ONTASKBEGIN_OFFSET))(this);
	}
};
