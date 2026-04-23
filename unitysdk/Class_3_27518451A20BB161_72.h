#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB92CDDA4388C8F2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB78E830)
#define CLASS_3_27518451A20BB161_72__CTOR_OFFSET UNITYSDK_OFFSET(0xB78E800)

inline static constexpr unsigned int Class_3_27518451A20BB161_72_TypeDefinitionIndex = 49611;

class Class_3_27518451A20BB161_72 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB92CDDA4388C8F2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB92CDDA4388C8F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB92CDDA4388C8F2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_72_ONTASKBEGIN_OFFSET))(this);
	}
};
