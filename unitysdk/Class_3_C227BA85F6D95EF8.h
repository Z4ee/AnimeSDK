#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByScepterProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C227BA85F6D95EF8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B4E80)
#define CLASS_3_C227BA85F6D95EF8__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B4DA0)

inline static constexpr unsigned int Class_3_C227BA85F6D95EF8_TypeDefinitionIndex = 55655;

class Class_3_C227BA85F6D95EF8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByScepterProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByScepterProperty*))((::PBYTE)hIl2Cpp + CLASS_3_C227BA85F6D95EF8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C227BA85F6D95EF8_ONTASKBEGIN_OFFSET))(this);
	}
};
