#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7E22523C5ED234DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C491A0)
#define CLASS_3_7E22523C5ED234DB__CTOR_OFFSET UNITYSDK_OFFSET(0x8C49170)

inline static constexpr unsigned int Class_3_7E22523C5ED234DB_TypeDefinitionIndex = 44080;

class Class_3_7E22523C5ED234DB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearHPSharedGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearHPSharedGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearHPSharedGroup*))((::PBYTE)hIl2Cpp + CLASS_3_7E22523C5ED234DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E22523C5ED234DB_ONTASKBEGIN_OFFSET))(this);
	}
};
