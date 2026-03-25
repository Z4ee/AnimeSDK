#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachEntityUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_199C887C8B7CFA71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11187140)
#define CLASS_3_199C887C8B7CFA71__CTOR_OFFSET UNITYSDK_OFFSET(0x11187110)

inline static constexpr unsigned int Class_3_199C887C8B7CFA71_TypeDefinitionIndex = 43906;

class Class_3_199C887C8B7CFA71 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachEntityUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachEntityUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachEntityUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_199C887C8B7CFA71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_199C887C8B7CFA71_ONTASKBEGIN_OFFSET))(this);
	}
};
