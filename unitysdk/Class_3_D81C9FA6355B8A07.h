#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackStatusResistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D81C9FA6355B8A07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FB57A0)
#define CLASS_3_D81C9FA6355B8A07__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB5770)

inline static constexpr unsigned int Class_3_D81C9FA6355B8A07_TypeDefinitionIndex = 53134;

class Class_3_D81C9FA6355B8A07 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackStatusResistance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusResistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusResistance*))((::PBYTE)hIl2Cpp + CLASS_3_D81C9FA6355B8A07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D81C9FA6355B8A07_ONTASKBEGIN_OFFSET))(this);
	}
};
