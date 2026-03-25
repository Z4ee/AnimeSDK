#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByPreShowStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B907358A9F730B21_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11406B90)
#define CLASS_3_B907358A9F730B21__CTOR_OFFSET UNITYSDK_OFFSET(0x11406AB0)

inline static constexpr unsigned int Class_3_B907358A9F730B21_TypeDefinitionIndex = 43777;

class Class_3_B907358A9F730B21 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + CLASS_3_B907358A9F730B21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B907358A9F730B21_ONTASKBEGIN_OFFSET))(this);
	}
};
