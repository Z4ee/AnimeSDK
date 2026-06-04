#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTimeRewindAttachPointVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5413F7F9A79AA9FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9E4E60)
#define CLASS_3_5413F7F9A79AA9FD__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E4E30)

inline static constexpr unsigned int Class_3_5413F7F9A79AA9FD_TypeDefinitionIndex = 49887;

class Class_3_5413F7F9A79AA9FD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTimeRewindAttachPointVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*))((::PBYTE)hIl2Cpp + CLASS_3_5413F7F9A79AA9FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5413F7F9A79AA9FD_ONTASKBEGIN_OFFSET))(this);
	}
};
