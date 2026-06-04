#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockMainStreamSourceToSwitchAnchorPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_87EEE808EDBD5715_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA752890)
#define CLASS_3_87EEE808EDBD5715__CTOR_OFFSET UNITYSDK_OFFSET(0xA752860)

inline static constexpr unsigned int Class_3_87EEE808EDBD5715_TypeDefinitionIndex = 54403;

class Class_3_87EEE808EDBD5715 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*))((::PBYTE)hIl2Cpp + CLASS_3_87EEE808EDBD5715__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87EEE808EDBD5715_ONTASKBEGIN_OFFSET))(this);
	}
};
