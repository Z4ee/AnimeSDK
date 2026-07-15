#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6F3853A3DE21061_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181A5E80)
#define CLASS_3_F6F3853A3DE21061__CTOR_OFFSET UNITYSDK_OFFSET(0x181A5DA0)

inline static constexpr unsigned int Class_3_F6F3853A3DE21061_TypeDefinitionIndex = 52929;

class Class_3_F6F3853A3DE21061 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*))((::PBYTE)hIl2Cpp + CLASS_3_F6F3853A3DE21061__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F3853A3DE21061_ONTASKBEGIN_OFFSET))(this);
	}
};
