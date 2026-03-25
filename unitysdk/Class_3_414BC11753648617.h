#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupModifierExtraMaxLayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_414BC11753648617_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE3F8E0)
#define CLASS_3_414BC11753648617__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3F8B0)

inline static constexpr unsigned int Class_3_414BC11753648617_TypeDefinitionIndex = 44531;

class Class_3_414BC11753648617 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupModifierExtraMaxLayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupModifierExtraMaxLayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupModifierExtraMaxLayer*))((::PBYTE)hIl2Cpp + CLASS_3_414BC11753648617__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_414BC11753648617_ONTASKBEGIN_OFFSET))(this);
	}
};
