#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitInline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C4247DB0F8B6398_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162EC960)
#define CLASS_3_0C4247DB0F8B6398_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162ECAE0)
#define CLASS_3_0C4247DB0F8B6398_TICK_OFFSET UNITYSDK_OFFSET(0x162ECA40)
#define CLASS_3_0C4247DB0F8B6398__CTOR_OFFSET UNITYSDK_OFFSET(0x162EC930)

inline static constexpr unsigned int Class_3_0C4247DB0F8B6398_TypeDefinitionIndex = 49788;

class Class_3_0C4247DB0F8B6398 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerWaitInline*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*))((::PBYTE)hIl2Cpp + CLASS_3_0C4247DB0F8B6398__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C4247DB0F8B6398_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0C4247DB0F8B6398_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C4247DB0F8B6398_ONTASKRESET_OFFSET))(this);
	}
};
