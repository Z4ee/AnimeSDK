#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByDelayCumulate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8BC451CC6BF4A151_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163CE7E0)
#define CLASS_3_8BC451CC6BF4A151__CTOR_OFFSET UNITYSDK_OFFSET(0x163CE700)

inline static constexpr unsigned int Class_3_8BC451CC6BF4A151_TypeDefinitionIndex = 55620;

class Class_3_8BC451CC6BF4A151 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByDelayCumulate*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*))((::PBYTE)hIl2Cpp + CLASS_3_8BC451CC6BF4A151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BC451CC6BF4A151_ONTASKBEGIN_OFFSET))(this);
	}
};
