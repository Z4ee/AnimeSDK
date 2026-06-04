#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvStartIsometric; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0597DF14CF2F5EA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14360600)
#define CLASS_3_0597DF14CF2F5EA0__CTOR_OFFSET UNITYSDK_OFFSET(0x143605D0)

inline static constexpr unsigned int Class_3_0597DF14CF2F5EA0_TypeDefinitionIndex = 49111;

class Class_3_0597DF14CF2F5EA0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvStartIsometric*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStartIsometric* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStartIsometric*))((::PBYTE)hIl2Cpp + CLASS_3_0597DF14CF2F5EA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0597DF14CF2F5EA0_ONTASKBEGIN_OFFSET))(this);
	}
};
