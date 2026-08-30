#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNpcHeadLookAtPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7EED2C66E446A37D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD5A810)
#define CLASS_3_7EED2C66E446A37D__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5A7E0)

inline static constexpr unsigned int Class_3_7EED2C66E446A37D_TypeDefinitionIndex = 52725;

class Class_3_7EED2C66E446A37D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNpcHeadLookAtPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_7EED2C66E446A37D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EED2C66E446A37D_ONTASKBEGIN_OFFSET))(this);
	}
};
