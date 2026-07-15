#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByElationTimeSkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_330BF9586DB9BC4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19234830)
#define CLASS_3_330BF9586DB9BC4E__CTOR_OFFSET UNITYSDK_OFFSET(0x19234750)

inline static constexpr unsigned int Class_3_330BF9586DB9BC4E_TypeDefinitionIndex = 52919;

class Class_3_330BF9586DB9BC4E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByElationTimeSkillCount*))((::PBYTE)hIl2Cpp + CLASS_3_330BF9586DB9BC4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_330BF9586DB9BC4E_ONTASKBEGIN_OFFSET))(this);
	}
};
