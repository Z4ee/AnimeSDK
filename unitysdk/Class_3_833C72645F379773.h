#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_23B4269538917904;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_LookAtTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_833C72645F379773_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14A5C320)
#define CLASS_3_833C72645F379773_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14A5C440)
#define CLASS_3_833C72645F379773_TICK_OFFSET UNITYSDK_OFFSET(0x14A5C370)
#define CLASS_3_833C72645F379773__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5C1D0)

inline static constexpr unsigned int Class_3_833C72645F379773_TypeDefinitionIndex = 49860;

class Class_3_833C72645F379773 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_LookAtTarget*>
{
public:
	::Class_2_F67FF7EB526BF85C* Field_3_0; // 0x28
	::Class_2_23B4269538917904* Field_3_1; // 0x30
	::RPG::GameCore::GameEntity* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + CLASS_3_833C72645F379773__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_833C72645F379773_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_833C72645F379773_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_833C72645F379773_ONTASKRESET_OFFSET))(this);
	}
};
