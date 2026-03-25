#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutWait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA9CB9163F709F4A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EF5100)
#define CLASS_3_FA9CB9163F709F4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EF4C40)
#define CLASS_3_FA9CB9163F709F4A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9EF4F10)
#define CLASS_3_FA9CB9163F709F4A_TICK_OFFSET UNITYSDK_OFFSET(0x9EF4F60)
#define CLASS_3_FA9CB9163F709F4A__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF4C10)
#define CLASS_3_FA9CB9163F709F4A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EF5160)
#define CLASS_3_FA9CB9163F709F4A___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9EF5150)

inline static constexpr unsigned int Class_3_FA9CB9163F709F4A_TypeDefinitionIndex = 42183;

class Class_3_FA9CB9163F709F4A : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfTakeOutWait*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
