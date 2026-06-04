#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyLoseHPData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78D1A4932F51061C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1432C0F0)
#define CLASS_3_78D1A4932F51061C__CTOR_OFFSET UNITYSDK_OFFSET(0x1432C0C0)

inline static constexpr unsigned int Class_3_78D1A4932F51061C_TypeDefinitionIndex = 51566;

class Class_3_78D1A4932F51061C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyLoseHPData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + CLASS_3_78D1A4932F51061C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78D1A4932F51061C_ONTASKBEGIN_OFFSET))(this);
	}
};
