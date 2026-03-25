#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddGridFightDropData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5EFC68738B72091F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99CE570)
#define CLASS_3_5EFC68738B72091F__CTOR_OFFSET UNITYSDK_OFFSET(0x99CE540)

inline static constexpr unsigned int Class_3_5EFC68738B72091F_TypeDefinitionIndex = 43875;

class Class_3_5EFC68738B72091F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddGridFightDropData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGridFightDropData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGridFightDropData*))((::PBYTE)hIl2Cpp + CLASS_3_5EFC68738B72091F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EFC68738B72091F_ONTASKBEGIN_OFFSET))(this);
	}
};
