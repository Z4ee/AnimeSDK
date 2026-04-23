#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ST_Side_EnableDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6886AEB8FA1E1A46_METHOD_3_FA84BB82F7710FBB_OFFSET UNITYSDK_OFFSET(0x124B0BB0)
#define CLASS_3_6886AEB8FA1E1A46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124B0B20)
#define CLASS_3_6886AEB8FA1E1A46_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124B0CB0)
#define CLASS_3_6886AEB8FA1E1A46__CTOR_OFFSET UNITYSDK_OFFSET(0x124B0AC0)

inline static constexpr unsigned int Class_3_6886AEB8FA1E1A46_TypeDefinitionIndex = 48217;

class Class_3_6886AEB8FA1E1A46 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_EnableDialogue*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_EnableDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_EnableDialogue*))((::PBYTE)hIl2Cpp + CLASS_3_6886AEB8FA1E1A46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6886AEB8FA1E1A46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6886AEB8FA1E1A46_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_FA84BB82F7710FBB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6886AEB8FA1E1A46_METHOD_3_FA84BB82F7710FBB_OFFSET))(this, a1);
	}
};
