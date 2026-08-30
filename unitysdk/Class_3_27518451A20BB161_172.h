#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE5AFEF4939F3D38;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_172_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF492D0)
#define CLASS_3_27518451A20BB161_172__CTOR_OFFSET UNITYSDK_OFFSET(0xBF492A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_172_TypeDefinitionIndex = 55163;

class Class_3_27518451A20BB161_172 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE5AFEF4939F3D38*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE5AFEF4939F3D38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE5AFEF4939F3D38*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_172__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_172_ONTASKBEGIN_OFFSET))(this);
	}
};
