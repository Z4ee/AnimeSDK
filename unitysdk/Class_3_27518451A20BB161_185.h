#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_155E45DE622FEC05_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_185_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1A8690)
#define CLASS_3_27518451A20BB161_185__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A8660)

inline static constexpr unsigned int Class_3_27518451A20BB161_185_TypeDefinitionIndex = 55039;

class Class_3_27518451A20BB161_185 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_155E45DE622FEC05_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_155E45DE622FEC05_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_155E45DE622FEC05_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_185__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_185_ONTASKBEGIN_OFFSET))(this);
	}
};
