#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureModifyTeamPlayerHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B7E7EFC1AB5E161_METHOD_3_386DDA0C9929DC16_OFFSET UNITYSDK_OFFSET(0x924C4B0)
#define CLASS_3_5B7E7EFC1AB5E161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x924BFC0)
#define CLASS_3_5B7E7EFC1AB5E161__CTOR_OFFSET UNITYSDK_OFFSET(0x924BF90)

inline static constexpr unsigned int Class_3_5B7E7EFC1AB5E161_TypeDefinitionIndex = 53397;

class Class_3_5B7E7EFC1AB5E161 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureModifyTeamPlayerHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureModifyTeamPlayerHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureModifyTeamPlayerHP*))((::PBYTE)hIl2Cpp + CLASS_3_5B7E7EFC1AB5E161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B7E7EFC1AB5E161_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_386DDA0C9929DC16(::RPG::Client::MemberData* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + CLASS_3_5B7E7EFC1AB5E161_METHOD_3_386DDA0C9929DC16_OFFSET))(this, a1);
	}
};
