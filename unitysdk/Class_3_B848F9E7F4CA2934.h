#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleSetupStartupMode; }

#define CLASS_3_B848F9E7F4CA2934_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EBADD0)
#define CLASS_3_B848F9E7F4CA2934__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBADA0)

inline static constexpr unsigned int Class_3_B848F9E7F4CA2934_TypeDefinitionIndex = 56323;

class Class_3_B848F9E7F4CA2934 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleSetupStartupMode*))((::PBYTE)hIl2Cpp + CLASS_3_B848F9E7F4CA2934__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B848F9E7F4CA2934_ONTASKBEGIN_OFFSET))(this);
	}
};
