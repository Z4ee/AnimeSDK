#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueInRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0D324E421C8B48B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11EEF750)
#define CLASS_3_0D324E421C8B48B0__CTOR_OFFSET UNITYSDK_OFFSET(0x11EEF670)

inline static constexpr unsigned int Class_3_0D324E421C8B48B0_TypeDefinitionIndex = 55675;

class Class_3_0D324E421C8B48B0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueInRange*>
{
public:
	::RPG::GameCore::StringHash GJAGEOPALLJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueInRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueInRange*))((::PBYTE)hIl2Cpp + CLASS_3_0D324E421C8B48B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D324E421C8B48B0_ONTASKBEGIN_OFFSET))(this);
	}
};
