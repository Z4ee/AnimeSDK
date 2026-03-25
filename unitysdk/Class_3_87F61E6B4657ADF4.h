#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPhainonChargePointPreshow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_87F61E6B4657ADF4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA7C540)
#define CLASS_3_87F61E6B4657ADF4__CTOR_OFFSET UNITYSDK_OFFSET(0xEA7C510)

inline static constexpr unsigned int Class_3_87F61E6B4657ADF4_TypeDefinitionIndex = 44495;

class Class_3_87F61E6B4657ADF4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPhainonChargePointPreshow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonChargePointPreshow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonChargePointPreshow*))((::PBYTE)hIl2Cpp + CLASS_3_87F61E6B4657ADF4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87F61E6B4657ADF4_ONTASKBEGIN_OFFSET))(this);
	}
};
