#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CaptureEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1589F96E83F7F69E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B89070)
#define CLASS_3_1589F96E83F7F69E__CTOR_OFFSET UNITYSDK_OFFSET(0x8B89040)

inline static constexpr unsigned int Class_3_1589F96E83F7F69E_TypeDefinitionIndex = 42624;

class Class_3_1589F96E83F7F69E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CaptureEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1589F96E83F7F69E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1589F96E83F7F69E_ONTASKBEGIN_OFFSET))(this);
	}
};
