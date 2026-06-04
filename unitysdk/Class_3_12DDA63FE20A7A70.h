#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleItemProgressInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_12DDA63FE20A7A70_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE4F270)
#define CLASS_3_12DDA63FE20A7A70__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4F240)

inline static constexpr unsigned int Class_3_12DDA63FE20A7A70_TypeDefinitionIndex = 51707;

class Class_3_12DDA63FE20A7A70 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleItemProgressInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleItemProgressInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_3_12DDA63FE20A7A70__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12DDA63FE20A7A70_ONTASKBEGIN_OFFSET))(this);
	}
};
