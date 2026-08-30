#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByTeamFormationRow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BD9211AD00A5A8B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1606E670)
#define CLASS_3_BD9211AD00A5A8B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1606E590)

inline static constexpr unsigned int Class_3_BD9211AD00A5A8B7_TypeDefinitionIndex = 56590;

class Class_3_BD9211AD00A5A8B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByTeamFormationRow*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTeamFormationRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*))((::PBYTE)hIl2Cpp + CLASS_3_BD9211AD00A5A8B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD9211AD00A5A8B7_ONTASKBEGIN_OFFSET))(this);
	}
};
