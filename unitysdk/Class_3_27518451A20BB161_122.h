#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB92CDDA4388C8F2_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_122_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0B3C50)
#define CLASS_3_27518451A20BB161_122__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B3C20)

inline static constexpr unsigned int Class_3_27518451A20BB161_122_TypeDefinitionIndex = 54044;

class Class_3_27518451A20BB161_122 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB92CDDA4388C8F2_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB92CDDA4388C8F2_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB92CDDA4388C8F2_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_122_ONTASKBEGIN_OFFSET))(this);
	}
};
