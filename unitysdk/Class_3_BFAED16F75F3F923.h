#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BuildTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BFAED16F75F3F923_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1809A470)
#define CLASS_3_BFAED16F75F3F923__CTOR_OFFSET UNITYSDK_OFFSET(0x1809A440)

inline static constexpr unsigned int Class_3_BFAED16F75F3F923_TypeDefinitionIndex = 53621;

class Class_3_BFAED16F75F3F923 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BuildTimelineEntityState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BuildTimelineEntityState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BuildTimelineEntityState*))((::PBYTE)hIl2Cpp + CLASS_3_BFAED16F75F3F923__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFAED16F75F3F923_ONTASKBEGIN_OFFSET))(this);
	}
};
