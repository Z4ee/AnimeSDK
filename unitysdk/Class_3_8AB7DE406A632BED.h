#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupMapRotationCharger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AB7DE406A632BED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AC3C50)
#define CLASS_3_8AB7DE406A632BED__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC3C20)

inline static constexpr unsigned int Class_3_8AB7DE406A632BED_TypeDefinitionIndex = 50596;

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
