#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByHitSplitRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AC87F295EEFD6C71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C31350)
#define CLASS_3_AC87F295EEFD6C71__CTOR_OFFSET UNITYSDK_OFFSET(0x10C31270)

inline static constexpr unsigned int Class_3_AC87F295EEFD6C71_TypeDefinitionIndex = 44403;

class Class_3_AC87F295EEFD6C71 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByHitSplitRatio*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*))((::PBYTE)hIl2Cpp + CLASS_3_AC87F295EEFD6C71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC87F295EEFD6C71_ONTASKBEGIN_OFFSET))(this);
	}
};
