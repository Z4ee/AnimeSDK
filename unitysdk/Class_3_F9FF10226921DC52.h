#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RegisterLittleGameSequences; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9FF10226921DC52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A30930)
#define CLASS_3_F9FF10226921DC52__CTOR_OFFSET UNITYSDK_OFFSET(0x9A30900)

inline static constexpr unsigned int Class_3_F9FF10226921DC52_TypeDefinitionIndex = 48854;

class Class_3_F9FF10226921DC52 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RegisterLittleGameSequences*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + CLASS_3_F9FF10226921DC52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9FF10226921DC52_ONTASKBEGIN_OFFSET))(this);
	}
};
