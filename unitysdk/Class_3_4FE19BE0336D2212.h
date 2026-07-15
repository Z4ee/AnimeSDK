#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonusCurrentLayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4FE19BE0336D2212_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186E91A0)
#define CLASS_3_4FE19BE0336D2212__CTOR_OFFSET UNITYSDK_OFFSET(0x186E90C0)

inline static constexpr unsigned int Class_3_4FE19BE0336D2212_TypeDefinitionIndex = 52930;

class Class_3_4FE19BE0336D2212 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*))((::PBYTE)hIl2Cpp + CLASS_3_4FE19BE0336D2212__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FE19BE0336D2212_ONTASKBEGIN_OFFSET))(this);
	}
};
