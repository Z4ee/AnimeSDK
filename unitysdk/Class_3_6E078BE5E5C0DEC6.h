#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowGridFightProgressToWhitebox; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6E078BE5E5C0DEC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124FEB50)
#define CLASS_3_6E078BE5E5C0DEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x124FEB20)

inline static constexpr unsigned int Class_3_6E078BE5E5C0DEC6_TypeDefinitionIndex = 54040;

class Class_3_6E078BE5E5C0DEC6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowGridFightProgressToWhitebox*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*))((::PBYTE)hIl2Cpp + CLASS_3_6E078BE5E5C0DEC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E078BE5E5C0DEC6_ONTASKBEGIN_OFFSET))(this);
	}
};
