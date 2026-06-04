#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RestartTrackPhoto; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B1C6FEA9380D8F82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA55B70)
#define CLASS_3_B1C6FEA9380D8F82__CTOR_OFFSET UNITYSDK_OFFSET(0xAA55B40)

inline static constexpr unsigned int Class_3_B1C6FEA9380D8F82_TypeDefinitionIndex = 49730;

class Class_3_B1C6FEA9380D8F82 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RestartTrackPhoto*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestartTrackPhoto* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestartTrackPhoto*))((::PBYTE)hIl2Cpp + CLASS_3_B1C6FEA9380D8F82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1C6FEA9380D8F82_ONTASKBEGIN_OFFSET))(this);
	}
};
