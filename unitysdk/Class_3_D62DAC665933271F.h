#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroActivateBullet; }

#define CLASS_3_D62DAC665933271F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D5D670)
#define CLASS_3_D62DAC665933271F__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5D640)

inline static constexpr unsigned int Class_3_D62DAC665933271F_TypeDefinitionIndex = 56318;

class Class_3_D62DAC665933271F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroActivateBullet*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroActivateBullet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroActivateBullet*))((::PBYTE)hIl2Cpp + CLASS_3_D62DAC665933271F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D62DAC665933271F_ONTASKBEGIN_OFFSET))(this);
	}
};
