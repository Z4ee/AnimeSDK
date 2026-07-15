#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A372FA4C29F4FF51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169ACED0)
#define CLASS_3_A372FA4C29F4FF51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169ACB10)
#define CLASS_3_A372FA4C29F4FF51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169ACE80)
#define CLASS_3_A372FA4C29F4FF51_TICK_OFFSET UNITYSDK_OFFSET(0x169ACE20)
#define CLASS_3_A372FA4C29F4FF51__CTOR_OFFSET UNITYSDK_OFFSET(0x169ACAE0)

inline static constexpr unsigned int Class_3_A372FA4C29F4FF51_TypeDefinitionIndex = 49911;

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
