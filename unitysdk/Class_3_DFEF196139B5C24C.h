#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RandomSelectPropState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DFEF196139B5C24C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12125C80)
#define CLASS_3_DFEF196139B5C24C__CTOR_OFFSET UNITYSDK_OFFSET(0x12125C50)

inline static constexpr unsigned int Class_3_DFEF196139B5C24C_TypeDefinitionIndex = 49050;

class Class_3_DFEF196139B5C24C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectPropState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectPropState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + CLASS_3_DFEF196139B5C24C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFEF196139B5C24C_ONTASKBEGIN_OFFSET))(this);
	}
};
