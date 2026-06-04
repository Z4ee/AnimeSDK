#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReleaseTargetUniqueName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E7AED7164011F75E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138F2FB0)
#define CLASS_3_E7AED7164011F75E__CTOR_OFFSET UNITYSDK_OFFSET(0x138F2F80)

inline static constexpr unsigned int Class_3_E7AED7164011F75E_TypeDefinitionIndex = 51652;

class Class_3_E7AED7164011F75E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReleaseTargetUniqueName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseTargetUniqueName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseTargetUniqueName*))((::PBYTE)hIl2Cpp + CLASS_3_E7AED7164011F75E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7AED7164011F75E_ONTASKBEGIN_OFFSET))(this);
	}
};
