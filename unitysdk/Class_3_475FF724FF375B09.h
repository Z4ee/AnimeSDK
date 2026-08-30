#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_FF65FA96463E7784;
class Class_3_CAD83FC079AAC20A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_475FF724FF375B09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17108670)
#define CLASS_3_475FF724FF375B09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171086B0)
#define CLASS_3_475FF724FF375B09__CTOR_OFFSET UNITYSDK_OFFSET(0x17108640)

inline static constexpr unsigned int Class_3_475FF724FF375B09_TypeDefinitionIndex = 54035;

class Class_3_475FF724FF375B09 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAD83FC079AAC20A*>
{
public:
	::Class_1_FF65FA96463E7784* HOMJBACGGJB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAD83FC079AAC20A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAD83FC079AAC20A*))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_ONTASKBEGIN_OFFSET))(this);
	}
};
