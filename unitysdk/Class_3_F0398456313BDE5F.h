#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NotifyDeadPartSelected; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F0398456313BDE5F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F58E80)
#define CLASS_3_F0398456313BDE5F__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58E50)

inline static constexpr unsigned int Class_3_F0398456313BDE5F_TypeDefinitionIndex = 53833;

class Class_3_F0398456313BDE5F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NotifyDeadPartSelected*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyDeadPartSelected* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyDeadPartSelected*))((::PBYTE)hIl2Cpp + CLASS_3_F0398456313BDE5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0398456313BDE5F_ONTASKBEGIN_OFFSET))(this);
	}
};
