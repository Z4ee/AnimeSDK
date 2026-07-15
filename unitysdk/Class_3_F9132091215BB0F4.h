#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimeraDuelEnterShowcaseBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9132091215BB0F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183DB0B0)
#define CLASS_3_F9132091215BB0F4__CTOR_OFFSET UNITYSDK_OFFSET(0x183DB080)

inline static constexpr unsigned int Class_3_F9132091215BB0F4_TypeDefinitionIndex = 55442;

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
