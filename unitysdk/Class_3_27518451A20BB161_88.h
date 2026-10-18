#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F8C6D830DE46A175;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC732C90)
#define CLASS_3_27518451A20BB161_88__CTOR_OFFSET UNITYSDK_OFFSET(0xC732C60)

inline static constexpr unsigned int Class_3_27518451A20BB161_88_TypeDefinitionIndex = 52962;

class Class_3_27518451A20BB161_88 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F8C6D830DE46A175*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F8C6D830DE46A175* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F8C6D830DE46A175*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET))(this);
	}
};
