#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenGameTriggerOpertation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D96DE705AD1BDC39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABADF20)
#define CLASS_3_D96DE705AD1BDC39__CTOR_OFFSET UNITYSDK_OFFSET(0xABADEF0)

inline static constexpr unsigned int Class_3_D96DE705AD1BDC39_TypeDefinitionIndex = 48884;

class Class_3_D96DE705AD1BDC39 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenGameTriggerOpertation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameTriggerOpertation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameTriggerOpertation*))((::PBYTE)hIl2Cpp + CLASS_3_D96DE705AD1BDC39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D96DE705AD1BDC39_ONTASKBEGIN_OFFSET))(this);
	}
};
