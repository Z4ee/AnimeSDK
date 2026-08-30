#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBreakBaseDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F46D2C629419C209_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1591A840)
#define CLASS_3_F46D2C629419C209__CTOR_OFFSET UNITYSDK_OFFSET(0x1591A760)

inline static constexpr unsigned int Class_3_F46D2C629419C209_TypeDefinitionIndex = 55610;

class Class_3_F46D2C629419C209 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBreakBaseDamage*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*))((::PBYTE)hIl2Cpp + CLASS_3_F46D2C629419C209__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F46D2C629419C209_ONTASKBEGIN_OFFSET))(this);
	}
};
