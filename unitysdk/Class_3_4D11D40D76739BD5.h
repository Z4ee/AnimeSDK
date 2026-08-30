#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvForceHideBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D11D40D76739BD5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154E0210)
#define CLASS_3_4D11D40D76739BD5__CTOR_OFFSET UNITYSDK_OFFSET(0x154E01E0)

inline static constexpr unsigned int Class_3_4D11D40D76739BD5_TypeDefinitionIndex = 52650;

class Class_3_4D11D40D76739BD5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvForceHideBillboard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceHideBillboard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceHideBillboard*))((::PBYTE)hIl2Cpp + CLASS_3_4D11D40D76739BD5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D11D40D76739BD5_ONTASKBEGIN_OFFSET))(this);
	}
};
