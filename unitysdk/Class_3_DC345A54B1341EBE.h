#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitFlipperLightDevice; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DC345A54B1341EBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1166D510)
#define CLASS_3_DC345A54B1341EBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1166D4E0)

inline static constexpr unsigned int Class_3_DC345A54B1341EBE_TypeDefinitionIndex = 42717;

class Class_3_DC345A54B1341EBE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitFlipperLightDevice*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitFlipperLightDevice* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitFlipperLightDevice*))((::PBYTE)hIl2Cpp + CLASS_3_DC345A54B1341EBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC345A54B1341EBE_ONTASKBEGIN_OFFSET))(this);
	}
};
