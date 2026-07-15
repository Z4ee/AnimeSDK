#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideSelectDarkTeamEntityCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DAEB88CF0A99CC63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152FB4A0)
#define CLASS_3_DAEB88CF0A99CC63__CTOR_OFFSET UNITYSDK_OFFSET(0x152FB470)

inline static constexpr unsigned int Class_3_DAEB88CF0A99CC63_TypeDefinitionIndex = 52743;

class Class_3_DAEB88CF0A99CC63 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + CLASS_3_DAEB88CF0A99CC63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAEB88CF0A99CC63_ONTASKBEGIN_OFFSET))(this);
	}
};
