#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RA_SetAIVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F3E273E23451D00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16775590)
#define CLASS_3_2F3E273E23451D00__CTOR_OFFSET UNITYSDK_OFFSET(0x16775560)

inline static constexpr unsigned int Class_3_2F3E273E23451D00_TypeDefinitionIndex = 49728;

class Class_3_2F3E273E23451D00 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RA_SetAIVariableBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_SetAIVariableBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_SetAIVariableBool*))((::PBYTE)hIl2Cpp + CLASS_3_2F3E273E23451D00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F3E273E23451D00_ONTASKBEGIN_OFFSET))(this);
	}
};
