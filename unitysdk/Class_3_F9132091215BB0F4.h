#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimeraDuelEnterShowcaseBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9132091215BB0F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7AD690)
#define CLASS_3_F9132091215BB0F4__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AD660)

inline static constexpr unsigned int Class_3_F9132091215BB0F4_TypeDefinitionIndex = 53506;

class Class_3_F9132091215BB0F4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelEnterShowcaseBattle*))((::PBYTE)hIl2Cpp + CLASS_3_F9132091215BB0F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9132091215BB0F4_ONTASKBEGIN_OFFSET))(this);
	}
};
