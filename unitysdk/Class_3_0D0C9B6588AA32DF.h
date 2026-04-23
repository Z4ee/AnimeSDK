#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0D0C9B6588AA32DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118A5EA0)
#define CLASS_3_0D0C9B6588AA32DF__CTOR_OFFSET UNITYSDK_OFFSET(0x118A5E70)

inline static constexpr unsigned int Class_3_0D0C9B6588AA32DF_TypeDefinitionIndex = 48920;

class Class_3_0D0C9B6588AA32DF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideCustomDroneFuncBtn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_3_0D0C9B6588AA32DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D0C9B6588AA32DF_ONTASKBEGIN_OFFSET))(this);
	}
};
