#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRemoveEffectList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68482C924C10580F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC72F6E0)
#define CLASS_3_68482C924C10580F__CTOR_OFFSET UNITYSDK_OFFSET(0xC72F6B0)

inline static constexpr unsigned int Class_3_68482C924C10580F_TypeDefinitionIndex = 48455;

class Class_3_68482C924C10580F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRemoveEffectList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveEffectList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveEffectList*))((::PBYTE)hIl2Cpp + CLASS_3_68482C924C10580F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68482C924C10580F_ONTASKBEGIN_OFFSET))(this);
	}
};
