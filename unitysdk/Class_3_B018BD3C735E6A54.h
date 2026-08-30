#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetHLODSwitchDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B018BD3C735E6A54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169EA240)
#define CLASS_3_B018BD3C735E6A54__CTOR_OFFSET UNITYSDK_OFFSET(0x169EA210)

inline static constexpr unsigned int Class_3_B018BD3C735E6A54_TypeDefinitionIndex = 56084;

class Class_3_B018BD3C735E6A54 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetHLODSwitchDelay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHLODSwitchDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHLODSwitchDelay*))((::PBYTE)hIl2Cpp + CLASS_3_B018BD3C735E6A54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B018BD3C735E6A54_ONTASKBEGIN_OFFSET))(this);
	}
};
