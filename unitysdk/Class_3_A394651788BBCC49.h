#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetTimeRelayFlame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A394651788BBCC49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E3030)
#define CLASS_3_A394651788BBCC49__CTOR_OFFSET UNITYSDK_OFFSET(0x158E3000)

inline static constexpr unsigned int Class_3_A394651788BBCC49_TypeDefinitionIndex = 50783;

class Class_3_A394651788BBCC49 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetTimeRelayFlame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTimeRelayFlame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTimeRelayFlame*))((::PBYTE)hIl2Cpp + CLASS_3_A394651788BBCC49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A394651788BBCC49_ONTASKBEGIN_OFFSET))(this);
	}
};
