#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class SetStageItemState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31F639F6C436C0BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155879E0)
#define CLASS_3_31F639F6C436C0BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15587490)
#define CLASS_3_31F639F6C436C0BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15587840)
#define CLASS_3_31F639F6C436C0BD__CTOR_OFFSET UNITYSDK_OFFSET(0x15587460)

inline static constexpr unsigned int Class_3_31F639F6C436C0BD_TypeDefinitionIndex = 58726;

class Class_3_31F639F6C436C0BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetStageItemState*>
{
public:
	::RPG::GameCore::SetStageItemState* EJJEEJENLDA; // 0x28
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStageItemState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_DISPOSE_OFFSET))(this);
	}
};
