#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifierOverrideOnHitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40BB99683DBB635F_METHOD_3_4BD4D7606154E372_OFFSET UNITYSDK_OFFSET(0x12539010)
#define CLASS_3_40BB99683DBB635F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12538D10)
#define CLASS_3_40BB99683DBB635F__CTOR_OFFSET UNITYSDK_OFFSET(0x12538CE0)

inline static constexpr unsigned int Class_3_40BB99683DBB635F_TypeDefinitionIndex = 50875;

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

	::System::Int32 Method_3_4BD4D7606154E372()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40BB99683DBB635F_METHOD_3_4BD4D7606154E372_OFFSET))(this);
	}
};
