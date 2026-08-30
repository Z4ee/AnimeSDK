#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyGridFightCustomProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EFC32EB1D01029B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDB1AA0)
#define CLASS_3_EFC32EB1D01029B8__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB1A70)

inline static constexpr unsigned int Class_3_EFC32EB1D01029B8_TypeDefinitionIndex = 55406;

class Class_3_EFC32EB1D01029B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyGridFightCustomProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + CLASS_3_EFC32EB1D01029B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFC32EB1D01029B8_ONTASKBEGIN_OFFSET))(this);
	}
};
