#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideEndTransferType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AEB663FC2D4696B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB16500)
#define CLASS_3_8AEB663FC2D4696B__CTOR_OFFSET UNITYSDK_OFFSET(0xAB164D0)

inline static constexpr unsigned int Class_3_8AEB663FC2D4696B_TypeDefinitionIndex = 49588;

class Class_3_8AEB663FC2D4696B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideEndTransferType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + CLASS_3_8AEB663FC2D4696B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AEB663FC2D4696B_ONTASKBEGIN_OFFSET))(this);
	}
};
