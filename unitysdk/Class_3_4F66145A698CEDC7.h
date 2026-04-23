#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearActionBarHighlightEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F66145A698CEDC7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12334750)
#define CLASS_3_4F66145A698CEDC7__CTOR_OFFSET UNITYSDK_OFFSET(0x12334720)

inline static constexpr unsigned int Class_3_4F66145A698CEDC7_TypeDefinitionIndex = 50799;

class Class_3_4F66145A698CEDC7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearActionBarHighlightEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearActionBarHighlightEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearActionBarHighlightEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4F66145A698CEDC7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F66145A698CEDC7_ONTASKBEGIN_OFFSET))(this);
	}
};
