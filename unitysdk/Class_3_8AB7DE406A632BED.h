#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupMapRotationCharger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AB7DE406A632BED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E0D050)
#define CLASS_3_8AB7DE406A632BED__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0D020)

inline static constexpr unsigned int Class_3_8AB7DE406A632BED_TypeDefinitionIndex = 53275;

class Class_3_8AB7DE406A632BED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupMapRotationCharger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupMapRotationCharger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupMapRotationCharger*))((::PBYTE)hIl2Cpp + CLASS_3_8AB7DE406A632BED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AB7DE406A632BED_ONTASKBEGIN_OFFSET))(this);
	}
};
