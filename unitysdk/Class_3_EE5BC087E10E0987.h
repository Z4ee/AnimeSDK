#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetAbilityStartTimeStamp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE5BC087E10E0987_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15379A90)
#define CLASS_3_EE5BC087E10E0987__CTOR_OFFSET UNITYSDK_OFFSET(0x15379A60)

inline static constexpr unsigned int Class_3_EE5BC087E10E0987_TypeDefinitionIndex = 58996;

class Class_3_EE5BC087E10E0987 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetAbilityStartTimeStamp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + CLASS_3_EE5BC087E10E0987__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5BC087E10E0987_ONTASKBEGIN_OFFSET))(this);
	}
};
