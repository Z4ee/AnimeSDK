#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetUniqueName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_28F94EF33882399E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C7A90)
#define CLASS_3_28F94EF33882399E__CTOR_OFFSET UNITYSDK_OFFSET(0x157C7A60)

inline static constexpr unsigned int Class_3_28F94EF33882399E_TypeDefinitionIndex = 53066;

class Class_3_28F94EF33882399E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetUniqueName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetUniqueName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetUniqueName*))((::PBYTE)hIl2Cpp + CLASS_3_28F94EF33882399E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28F94EF33882399E_ONTASKBEGIN_OFFSET))(this);
	}
};
