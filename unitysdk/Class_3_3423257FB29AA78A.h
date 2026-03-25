#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearEntityFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3423257FB29AA78A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CAA1A0)
#define CLASS_3_3423257FB29AA78A__CTOR_OFFSET UNITYSDK_OFFSET(0x8CAA170)

inline static constexpr unsigned int Class_3_3423257FB29AA78A_TypeDefinitionIndex = 43994;

class Class_3_3423257FB29AA78A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearEntityFollowAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_3423257FB29AA78A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3423257FB29AA78A_ONTASKBEGIN_OFFSET))(this);
	}
};
