#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByWaveStageCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0B1C9CEEC5A9B6A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11D50E00)
#define CLASS_3_0B1C9CEEC5A9B6A6__CTOR_OFFSET UNITYSDK_OFFSET(0x11D50D20)

inline static constexpr unsigned int Class_3_0B1C9CEEC5A9B6A6_TypeDefinitionIndex = 53966;

class Class_3_0B1C9CEEC5A9B6A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByWaveStageCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*))((::PBYTE)hIl2Cpp + CLASS_3_0B1C9CEEC5A9B6A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B1C9CEEC5A9B6A6_ONTASKBEGIN_OFFSET))(this);
	}
};
