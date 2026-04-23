#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGroupEvent; }

#define CLASS_3_963A85E08DEC253F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92FEC60)
#define CLASS_3_963A85E08DEC253F__CTOR_OFFSET UNITYSDK_OFFSET(0x92FEC30)

inline static constexpr unsigned int Class_3_963A85E08DEC253F_TypeDefinitionIndex = 48500;

class Class_3_963A85E08DEC253F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerGroupEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + CLASS_3_963A85E08DEC253F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_963A85E08DEC253F_ONTASKBEGIN_OFFSET))(this);
	}
};
