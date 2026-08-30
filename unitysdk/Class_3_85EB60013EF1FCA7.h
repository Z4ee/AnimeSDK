#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideAllEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_85EB60013EF1FCA7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13500510)
#define CLASS_3_85EB60013EF1FCA7__CTOR_OFFSET UNITYSDK_OFFSET(0x135004E0)

inline static constexpr unsigned int Class_3_85EB60013EF1FCA7_TypeDefinitionIndex = 55296;

class Class_3_85EB60013EF1FCA7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideAllEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideAllEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + CLASS_3_85EB60013EF1FCA7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85EB60013EF1FCA7_ONTASKBEGIN_OFFSET))(this);
	}
};
