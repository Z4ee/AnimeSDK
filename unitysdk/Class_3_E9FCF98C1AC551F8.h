#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E9FCF98C1AC551F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1455DA20)
#define CLASS_3_E9FCF98C1AC551F8_METHOD_3_E49DAE6FD7CD796D_OFFSET UNITYSDK_OFFSET(0x1455D5B0)
#define CLASS_3_E9FCF98C1AC551F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1455D350)
#define CLASS_3_E9FCF98C1AC551F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1455D970)
#define CLASS_3_E9FCF98C1AC551F8_TICK_OFFSET UNITYSDK_OFFSET(0x1455D9C0)
#define CLASS_3_E9FCF98C1AC551F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1455D320)
#define CLASS_3_E9FCF98C1AC551F8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1455DAD0)
#define CLASS_3_E9FCF98C1AC551F8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1455DA70)

inline static constexpr unsigned int Class_3_E9FCF98C1AC551F8_TypeDefinitionIndex = 48770;

class Class_3_E9FCF98C1AC551F8 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9FCF98C1AC551F8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
