#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvDisableNpcSyncMotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AF124B325361ACEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCA6B230)
#define CLASS_3_AF124B325361ACEE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA6B200)

inline static constexpr unsigned int Class_3_AF124B325361ACEE_TypeDefinitionIndex = 58027;

class Class_3_AF124B325361ACEE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDisableNpcSyncMotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDisableNpcSyncMotion*))((::PBYTE)hIl2Cpp + CLASS_3_AF124B325361ACEE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF124B325361ACEE_ONTASKBEGIN_OFFSET))(this);
	}
};
