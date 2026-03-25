#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerDrink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_00444FA1B67D00E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AC40A0)
#define CLASS_3_00444FA1B67D00E4_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x8AC3F60)
#define CLASS_3_00444FA1B67D00E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AC3610)
#define CLASS_3_00444FA1B67D00E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8AC3A10)
#define CLASS_3_00444FA1B67D00E4_TICK_OFFSET UNITYSDK_OFFSET(0x8AC3A60)
#define CLASS_3_00444FA1B67D00E4__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC35F0)
#define CLASS_3_00444FA1B67D00E4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AC4100)
#define CLASS_3_00444FA1B67D00E4___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8AC40F0)

inline static constexpr unsigned int Class_3_00444FA1B67D00E4_TypeDefinitionIndex = 42168;

class Class_3_00444FA1B67D00E4 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerDrink*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x30
	::System::Single Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerDrink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerDrink*))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_METHOD_3_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
