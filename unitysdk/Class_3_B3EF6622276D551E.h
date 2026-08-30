#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearEntityRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B3EF6622276D551E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156DEBE0)
#define CLASS_3_B3EF6622276D551E__CTOR_OFFSET UNITYSDK_OFFSET(0x156DEBB0)

inline static constexpr unsigned int Class_3_B3EF6622276D551E_TypeDefinitionIndex = 55228;

class Class_3_B3EF6622276D551E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearEntityRelationGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityRelationGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityRelationGroup*))((::PBYTE)hIl2Cpp + CLASS_3_B3EF6622276D551E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3EF6622276D551E_ONTASKBEGIN_OFFSET))(this);
	}
};
