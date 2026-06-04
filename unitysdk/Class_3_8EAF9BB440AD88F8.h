#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleModifyEnergy; }

#define CLASS_3_8EAF9BB440AD88F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA745760)
#define CLASS_3_8EAF9BB440AD88F8__CTOR_OFFSET UNITYSDK_OFFSET(0xA745730)

inline static constexpr unsigned int Class_3_8EAF9BB440AD88F8_TypeDefinitionIndex = 55089;

class Class_3_8EAF9BB440AD88F8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*))((::PBYTE)hIl2Cpp + CLASS_3_8EAF9BB440AD88F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EAF9BB440AD88F8_ONTASKBEGIN_OFFSET))(this);
	}
};
