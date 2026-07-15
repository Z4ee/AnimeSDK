#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68E2501914EDE738_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171FB950)
#define CLASS_3_68E2501914EDE738__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB870)

inline static constexpr unsigned int Class_3_68E2501914EDE738_TypeDefinitionIndex = 52934;

class Class_3_68E2501914EDE738 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByHPSharedGroup*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*))((::PBYTE)hIl2Cpp + CLASS_3_68E2501914EDE738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68E2501914EDE738_ONTASKBEGIN_OFFSET))(this);
	}
};
