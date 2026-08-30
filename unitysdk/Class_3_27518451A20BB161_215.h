#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_155E45DE622FEC05_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_215_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A1F40)
#define CLASS_3_27518451A20BB161_215__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A1F10)

inline static constexpr unsigned int Class_3_27518451A20BB161_215_TypeDefinitionIndex = 55529;

class Class_3_27518451A20BB161_215 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_155E45DE622FEC05_4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_155E45DE622FEC05_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_155E45DE622FEC05_4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_215__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_215_ONTASKBEGIN_OFFSET))(this);
	}
};
