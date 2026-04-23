#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5A5451EFC28839DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11916400)
#define CLASS_3_5A5451EFC28839DE__CTOR_OFFSET UNITYSDK_OFFSET(0x119163D0)

inline static constexpr unsigned int Class_3_5A5451EFC28839DE_TypeDefinitionIndex = 53858;

class Class_3_5A5451EFC28839DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveStreamingSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveStreamingSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveStreamingSource*))((::PBYTE)hIl2Cpp + CLASS_3_5A5451EFC28839DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A5451EFC28839DE_ONTASKBEGIN_OFFSET))(this);
	}
};
