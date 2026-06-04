#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_220FA16874EB107E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABFE9B0)
#define CLASS_3_220FA16874EB107E__CTOR_OFFSET UNITYSDK_OFFSET(0xABFE980)

inline static constexpr unsigned int Class_3_220FA16874EB107E_TypeDefinitionIndex = 49754;

class Class_3_220FA16874EB107E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_220FA16874EB107E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_220FA16874EB107E_ONTASKBEGIN_OFFSET))(this);
	}
};
