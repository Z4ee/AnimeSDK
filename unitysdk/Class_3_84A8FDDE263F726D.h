#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByTargetToTeamCenterDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_84A8FDDE263F726D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158947C0)
#define CLASS_3_84A8FDDE263F726D__CTOR_OFFSET UNITYSDK_OFFSET(0x158946E0)

inline static constexpr unsigned int Class_3_84A8FDDE263F726D_TypeDefinitionIndex = 52960;

class Class_3_84A8FDDE263F726D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*))((::PBYTE)hIl2Cpp + CLASS_3_84A8FDDE263F726D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A8FDDE263F726D_ONTASKBEGIN_OFFSET))(this);
	}
};
