#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_94C034EB4ACEB27D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183E1E70)
#define CLASS_3_27518451A20BB161_41__CTOR_OFFSET UNITYSDK_OFFSET(0x183E1E40)

inline static constexpr unsigned int Class_3_27518451A20BB161_41_TypeDefinitionIndex = 50450;

class Class_3_27518451A20BB161_41 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_94C034EB4ACEB27D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_94C034EB4ACEB27D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_94C034EB4ACEB27D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET))(this);
	}
};
