#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByCurrentBP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_75690AC1A3A98C2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92B2CC0)
#define CLASS_3_75690AC1A3A98C2A__CTOR_OFFSET UNITYSDK_OFFSET(0x92B2BE0)

inline static constexpr unsigned int Class_3_75690AC1A3A98C2A_TypeDefinitionIndex = 51099;

class Class_3_75690AC1A3A98C2A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByCurrentBP*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCurrentBP*))((::PBYTE)hIl2Cpp + CLASS_3_75690AC1A3A98C2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75690AC1A3A98C2A_ONTASKBEGIN_OFFSET))(this);
	}
};
