#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetColliderCenterFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_999F2153825D2761_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E5DDA0)
#define CLASS_3_999F2153825D2761__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5DD70)

inline static constexpr unsigned int Class_3_999F2153825D2761_TypeDefinitionIndex = 55571;

class Class_3_999F2153825D2761 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetColliderCenterFollowAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_999F2153825D2761__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_999F2153825D2761_ONTASKBEGIN_OFFSET))(this);
	}
};
