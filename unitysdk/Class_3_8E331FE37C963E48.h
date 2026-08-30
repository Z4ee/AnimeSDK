#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMapRotationVolumeInteractEnabled; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E331FE37C963E48_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130A5140)
#define CLASS_3_8E331FE37C963E48__CTOR_OFFSET UNITYSDK_OFFSET(0x130A5110)

inline static constexpr unsigned int Class_3_8E331FE37C963E48_TypeDefinitionIndex = 53274;

class Class_3_8E331FE37C963E48 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMapRotationVolumeInteractEnabled*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + CLASS_3_8E331FE37C963E48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E331FE37C963E48_ONTASKBEGIN_OFFSET))(this);
	}
};
