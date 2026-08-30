#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D9520)
#define CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D9160)
#define CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157D94D0)
#define CLASS_3_A372FA4C29F4FF51_TICK_OFFSET UNITYSDK_OFFSET(0x157D9470)
#define CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET UNITYSDK_OFFSET(0x157D9130)

inline static constexpr unsigned int Class_3_A372FA4C29F4FF51_TypeDefinitionIndex = 52572;

class Class_3_A372FA4C29F4FF51 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_Hipplen_SetEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET))(this);
	}
};
