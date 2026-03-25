#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReinitProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_20876AEB4C37D545_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B64040)
#define CLASS_3_20876AEB4C37D545__CTOR_OFFSET UNITYSDK_OFFSET(0x8B64010)

inline static constexpr unsigned int Class_3_20876AEB4C37D545_TypeDefinitionIndex = 44266;

class Class_3_20876AEB4C37D545 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReinitProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReinitProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReinitProperty*))((::PBYTE)hIl2Cpp + CLASS_3_20876AEB4C37D545__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20876AEB4C37D545_ONTASKBEGIN_OFFSET))(this);
	}
};
