#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMunicipalStreamCenter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FEC36004FBA5BA92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA68CF0)
#define CLASS_3_FEC36004FBA5BA92__CTOR_OFFSET UNITYSDK_OFFSET(0xEA68CC0)

inline static constexpr unsigned int Class_3_FEC36004FBA5BA92_TypeDefinitionIndex = 47254;

class Class_3_FEC36004FBA5BA92 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMunicipalStreamCenter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMunicipalStreamCenter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMunicipalStreamCenter*))((::PBYTE)hIl2Cpp + CLASS_3_FEC36004FBA5BA92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEC36004FBA5BA92_ONTASKBEGIN_OFFSET))(this);
	}
};
