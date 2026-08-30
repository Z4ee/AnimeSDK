#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_155E45DE622FEC05_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_68_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B06B80)
#define CLASS_3_27518451A20BB161_68__CTOR_OFFSET UNITYSDK_OFFSET(0x16B06B50)

inline static constexpr unsigned int Class_3_27518451A20BB161_68_TypeDefinitionIndex = 53151;

class Class_3_27518451A20BB161_68 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_155E45DE622FEC05_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_155E45DE622FEC05_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_155E45DE622FEC05_2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68_ONTASKBEGIN_OFFSET))(this);
	}
};
