#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleReport; }

#define CLASS_3_6A81A69D4E30DA86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C9CC70)
#define CLASS_3_6A81A69D4E30DA86__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9CC40)

inline static constexpr unsigned int Class_3_6A81A69D4E30DA86_TypeDefinitionIndex = 59111;

class Class_3_6A81A69D4E30DA86 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroPuzzleReport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleReport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleReport*))((::PBYTE)hIl2Cpp + CLASS_3_6A81A69D4E30DA86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A81A69D4E30DA86_ONTASKBEGIN_OFFSET))(this);
	}
};
