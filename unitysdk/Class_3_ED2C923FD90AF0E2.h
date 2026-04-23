#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSummonUnitAutoHide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ED2C923FD90AF0E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128F0190)
#define CLASS_3_ED2C923FD90AF0E2__CTOR_OFFSET UNITYSDK_OFFSET(0x128F0160)

inline static constexpr unsigned int Class_3_ED2C923FD90AF0E2_TypeDefinitionIndex = 54005;

class Class_3_ED2C923FD90AF0E2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSummonUnitAutoHide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitAutoHide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitAutoHide*))((::PBYTE)hIl2Cpp + CLASS_3_ED2C923FD90AF0E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED2C923FD90AF0E2_ONTASKBEGIN_OFFSET))(this);
	}
};
