#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueBySkillMaxHitSplitCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA24143C5F5100A8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1156AC50)
#define CLASS_3_BA24143C5F5100A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1156AB70)

inline static constexpr unsigned int Class_3_BA24143C5F5100A8_TypeDefinitionIndex = 44419;

class Class_3_BA24143C5F5100A8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillMaxHitSplitCount*))((::PBYTE)hIl2Cpp + CLASS_3_BA24143C5F5100A8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA24143C5F5100A8_ONTASKBEGIN_OFFSET))(this);
	}
};
