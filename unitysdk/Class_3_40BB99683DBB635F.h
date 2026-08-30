#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40BB99683DBB635F_METHOD_3_1507F3E44262787B_OFFSET UNITYSDK_OFFSET(0x161EF460)
#define CLASS_3_40BB99683DBB635F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161EF1F0)
#define CLASS_3_40BB99683DBB635F__CTOR_OFFSET UNITYSDK_OFFSET(0x161EF1C0)

inline static constexpr unsigned int Class_3_40BB99683DBB635F_TypeDefinitionIndex = 55385;

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

	::System::Int32 Method_3_1507F3E44262787B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40BB99683DBB635F_METHOD_3_1507F3E44262787B_OFFSET))(this);
	}
};
