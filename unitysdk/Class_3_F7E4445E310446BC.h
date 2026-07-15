#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeFaceDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F7E4445E310446BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146CC630)
#define CLASS_3_F7E4445E310446BC__CTOR_OFFSET UNITYSDK_OFFSET(0x146CC600)

inline static constexpr unsigned int Class_3_F7E4445E310446BC_TypeDefinitionIndex = 52431;

class Class_3_F7E4445E310446BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeFaceDir*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeFaceDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeFaceDir*))((::PBYTE)hIl2Cpp + CLASS_3_F7E4445E310446BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7E4445E310446BC_ONTASKBEGIN_OFFSET))(this);
	}
};
