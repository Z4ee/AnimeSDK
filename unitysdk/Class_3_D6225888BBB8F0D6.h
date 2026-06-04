#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableHugeMonsterHalfDither; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D6225888BBB8F0D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13804FF0)
#define CLASS_3_D6225888BBB8F0D6__CTOR_OFFSET UNITYSDK_OFFSET(0x13804FC0)

inline static constexpr unsigned int Class_3_D6225888BBB8F0D6_TypeDefinitionIndex = 51415;

class Class_3_D6225888BBB8F0D6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableHugeMonsterHalfDither*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableHugeMonsterHalfDither*))((::PBYTE)hIl2Cpp + CLASS_3_D6225888BBB8F0D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6225888BBB8F0D6_ONTASKBEGIN_OFFSET))(this);
	}
};
