#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_379CEDD103BBB4ED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C851C0)
#define CLASS_3_27518451A20BB161_53__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85190)

inline static constexpr unsigned int Class_3_27518451A20BB161_53_TypeDefinitionIndex = 49505;

class Class_3_27518451A20BB161_53 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_379CEDD103BBB4ED*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_379CEDD103BBB4ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_379CEDD103BBB4ED*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_53_ONTASKBEGIN_OFFSET))(this);
	}
};
