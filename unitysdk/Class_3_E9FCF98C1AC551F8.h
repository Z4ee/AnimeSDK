#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E9FCF98C1AC551F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D1C6A0)
#define CLASS_3_E9FCF98C1AC551F8_METHOD_3_E49DAE6FD7CD796D_OFFSET UNITYSDK_OFFSET(0x18D1C230)
#define CLASS_3_E9FCF98C1AC551F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18D1BFD0)
#define CLASS_3_E9FCF98C1AC551F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18D1C5F0)
#define CLASS_3_E9FCF98C1AC551F8_TICK_OFFSET UNITYSDK_OFFSET(0x18D1C640)
#define CLASS_3_E9FCF98C1AC551F8__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1BFA0)

inline static constexpr unsigned int Class_3_E9FCF98C1AC551F8_TypeDefinitionIndex = 52443;

class Class_3_E9FCF98C1AC551F8 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_E49DAE6FD7CD796D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8_METHOD_3_E49DAE6FD7CD796D_OFFSET))(this);
	}
};
