#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMonsterHUDVisibleType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFA95AA63A66F2B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B21530)
#define CLASS_3_CFA95AA63A66F2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x18B21500)

inline static constexpr unsigned int Class_3_CFA95AA63A66F2B6_TypeDefinitionIndex = 53032;

class Class_3_CFA95AA63A66F2B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterHUDVisibleType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + CLASS_3_CFA95AA63A66F2B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFA95AA63A66F2B6_ONTASKBEGIN_OFFSET))(this);
	}
};
