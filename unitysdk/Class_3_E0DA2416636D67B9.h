#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunFire; }

#define CLASS_3_E0DA2416636D67B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178EF5A0)
#define CLASS_3_E0DA2416636D67B9__CTOR_OFFSET UNITYSDK_OFFSET(0x178EF570)

inline static constexpr unsigned int Class_3_E0DA2416636D67B9_TypeDefinitionIndex = 59102;

class Class_3_E0DA2416636D67B9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroGunFire*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunFire* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunFire*))((::PBYTE)hIl2Cpp + CLASS_3_E0DA2416636D67B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0DA2416636D67B9_ONTASKBEGIN_OFFSET))(this);
	}
};
