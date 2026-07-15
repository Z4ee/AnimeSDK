#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_390AE1F20F1C20CC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1730D860)
#define CLASS_3_27518451A20BB161_82__CTOR_OFFSET UNITYSDK_OFFSET(0x1730D830)

inline static constexpr unsigned int Class_3_27518451A20BB161_82_TypeDefinitionIndex = 50570;

class Class_3_27518451A20BB161_82 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_390AE1F20F1C20CC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_390AE1F20F1C20CC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_390AE1F20F1C20CC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_82_ONTASKBEGIN_OFFSET))(this);
	}
};
