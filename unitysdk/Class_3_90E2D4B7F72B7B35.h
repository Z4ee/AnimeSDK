#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveVideoSequence; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_90E2D4B7F72B7B35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98D8980)
#define CLASS_3_90E2D4B7F72B7B35__CTOR_OFFSET UNITYSDK_OFFSET(0x98D8950)

inline static constexpr unsigned int Class_3_90E2D4B7F72B7B35_TypeDefinitionIndex = 49054;

class Class_3_90E2D4B7F72B7B35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveVideoSequence*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveVideoSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_3_90E2D4B7F72B7B35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90E2D4B7F72B7B35_ONTASKBEGIN_OFFSET))(this);
	}
};
