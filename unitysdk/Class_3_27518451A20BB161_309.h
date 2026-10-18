#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BD270527DDA5F245;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_309_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AC6CF0)
#define CLASS_3_27518451A20BB161_309__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC6CC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_309_TypeDefinitionIndex = 58543;

class Class_3_27518451A20BB161_309 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BD270527DDA5F245*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BD270527DDA5F245* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BD270527DDA5F245*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_309__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_309_ONTASKBEGIN_OFFSET))(this);
	}
};
