#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetColliderGroupState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0F32B8253A5D4B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89894E0)
#define CLASS_3_C0F32B8253A5D4B5__CTOR_OFFSET UNITYSDK_OFFSET(0x89894B0)

inline static constexpr unsigned int Class_3_C0F32B8253A5D4B5_TypeDefinitionIndex = 42504;

class Class_3_C0F32B8253A5D4B5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetColliderGroupState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetColliderGroupState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetColliderGroupState*))((::PBYTE)hIl2Cpp + CLASS_3_C0F32B8253A5D4B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0F32B8253A5D4B5_ONTASKBEGIN_OFFSET))(this);
	}
};
