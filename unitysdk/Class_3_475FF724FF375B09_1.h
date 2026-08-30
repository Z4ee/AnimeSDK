#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_E8307A20000A791C;
class Class_3_F10D795907445CF3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_475FF724FF375B09_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A94F0)
#define CLASS_3_475FF724FF375B09_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A9280)
#define CLASS_3_475FF724FF375B09_1__CTOR_OFFSET UNITYSDK_OFFSET(0x159A9250)

inline static constexpr unsigned int Class_3_475FF724FF375B09_1_TypeDefinitionIndex = 55071;

class Class_3_475FF724FF375B09_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F10D795907445CF3*>
{
public:
	::Class_1_E8307A20000A791C* APPIHABBCGK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F10D795907445CF3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F10D795907445CF3*))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_1_DISPOSE_OFFSET))(this);
	}
};
