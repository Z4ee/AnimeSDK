#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvReleaseTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_20E73CB19400C1E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1286DA30)
#define CLASS_3_20E73CB19400C1E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1286DA00)

inline static constexpr unsigned int Class_3_20E73CB19400C1E8_TypeDefinitionIndex = 48453;

class Class_3_20E73CB19400C1E8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvReleaseTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvReleaseTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvReleaseTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_20E73CB19400C1E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20E73CB19400C1E8_ONTASKBEGIN_OFFSET))(this);
	}
};
