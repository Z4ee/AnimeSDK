#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceEntityMappingInfo; }

#define CLASS_3_13427E43AF76934B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B204C0)
#define CLASS_3_13427E43AF76934B__CTOR_OFFSET UNITYSDK_OFFSET(0x16B20490)

inline static constexpr unsigned int Class_3_13427E43AF76934B_TypeDefinitionIndex = 53668;

class Class_3_13427E43AF76934B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TraceEntityMappingInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + CLASS_3_13427E43AF76934B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13427E43AF76934B_ONTASKBEGIN_OFFSET))(this);
	}
};
