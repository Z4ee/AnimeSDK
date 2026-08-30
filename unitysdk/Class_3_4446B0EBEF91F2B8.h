#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindOverrideHitProtectTime; }

#define CLASS_3_4446B0EBEF91F2B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC41210)
#define CLASS_3_4446B0EBEF91F2B8__CTOR_OFFSET UNITYSDK_OFFSET(0xBC411E0)

inline static constexpr unsigned int Class_3_4446B0EBEF91F2B8_TypeDefinitionIndex = 53659;

class Class_3_4446B0EBEF91F2B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindOverrideHitProtectTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*))((::PBYTE)hIl2Cpp + CLASS_3_4446B0EBEF91F2B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4446B0EBEF91F2B8_ONTASKBEGIN_OFFSET))(this);
	}
};
