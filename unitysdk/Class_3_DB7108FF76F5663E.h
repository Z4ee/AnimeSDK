#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomStringList; }

#define CLASS_3_DB7108FF76F5663E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15897890)
#define CLASS_3_DB7108FF76F5663E__CTOR_OFFSET UNITYSDK_OFFSET(0x15897860)

inline static constexpr unsigned int Class_3_DB7108FF76F5663E_TypeDefinitionIndex = 56145;

class Class_3_DB7108FF76F5663E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerCustomStringList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomStringList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomStringList*))((::PBYTE)hIl2Cpp + CLASS_3_DB7108FF76F5663E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB7108FF76F5663E_ONTASKBEGIN_OFFSET))(this);
	}
};
