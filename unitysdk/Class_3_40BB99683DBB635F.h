#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40BB99683DBB635F_METHOD_3_114F344E2DDCF341_OFFSET UNITYSDK_OFFSET(0x114DFBF0)
#define CLASS_3_40BB99683DBB635F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114DF990)
#define CLASS_3_40BB99683DBB635F__CTOR_OFFSET UNITYSDK_OFFSET(0x114DF960)

inline static constexpr unsigned int Class_3_40BB99683DBB635F_TypeDefinitionIndex = 44169;

class Class_3_40BB99683DBB635F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifierOverrideOnHitEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierOverrideOnHitEffect*))((::PBYTE)hIl2Cpp + CLASS_3_40BB99683DBB635F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40BB99683DBB635F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Int32 Method_3_114F344E2DDCF341()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40BB99683DBB635F_METHOD_3_114F344E2DDCF341_OFFSET))(this);
	}
};
