#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PresetColliderStateBeforeFlipEraRegion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3649096F7D06911D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1629F860)
#define CLASS_3_3649096F7D06911D__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F830)

inline static constexpr unsigned int Class_3_3649096F7D06911D_TypeDefinitionIndex = 53043;

class Class_3_3649096F7D06911D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + CLASS_3_3649096F7D06911D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3649096F7D06911D_ONTASKBEGIN_OFFSET))(this);
	}
};
