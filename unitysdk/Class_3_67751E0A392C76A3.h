#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideEndTransferColor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_67751E0A392C76A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9FC950)
#define CLASS_3_67751E0A392C76A3__CTOR_OFFSET UNITYSDK_OFFSET(0xD9FC920)

inline static constexpr unsigned int Class_3_67751E0A392C76A3_TypeDefinitionIndex = 48921;

class Class_3_67751E0A392C76A3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideEndTransferColor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEndTransferColor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEndTransferColor*))((::PBYTE)hIl2Cpp + CLASS_3_67751E0A392C76A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67751E0A392C76A3_ONTASKBEGIN_OFFSET))(this);
	}
};
