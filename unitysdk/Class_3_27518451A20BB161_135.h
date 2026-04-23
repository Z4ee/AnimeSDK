#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_155E45DE622FEC05_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124F75A0)
#define CLASS_3_27518451A20BB161_135__CTOR_OFFSET UNITYSDK_OFFSET(0x124F7570)

inline static constexpr unsigned int Class_3_27518451A20BB161_135_TypeDefinitionIndex = 51013;

class Class_3_27518451A20BB161_135 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_155E45DE622FEC05_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_155E45DE622FEC05_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_155E45DE622FEC05_3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_135_ONTASKBEGIN_OFFSET))(this);
	}
};
