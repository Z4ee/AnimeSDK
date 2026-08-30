#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA4B7FB3B116E8FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B16C90)
#define CLASS_3_BA4B7FB3B116E8FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B16C60)

inline static constexpr unsigned int Class_3_BA4B7FB3B116E8FD_TypeDefinitionIndex = 55120;

class Class_3_BA4B7FB3B116E8FD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeAnimEventConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeAnimEventConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeAnimEventConfig*))((::PBYTE)hIl2Cpp + CLASS_3_BA4B7FB3B116E8FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA4B7FB3B116E8FD_ONTASKBEGIN_OFFSET))(this);
	}
};
