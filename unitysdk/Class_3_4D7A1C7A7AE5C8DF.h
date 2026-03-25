#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerExtraPay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D7A1C7A7AE5C8DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1172E130)
#define CLASS_3_4D7A1C7A7AE5C8DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1172DC30)
#define CLASS_3_4D7A1C7A7AE5C8DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1172DF60)
#define CLASS_3_4D7A1C7A7AE5C8DF_TICK_OFFSET UNITYSDK_OFFSET(0x1172DFB0)
#define CLASS_3_4D7A1C7A7AE5C8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1172DC10)
#define CLASS_3_4D7A1C7A7AE5C8DF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1172E190)
#define CLASS_3_4D7A1C7A7AE5C8DF___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1172E180)

inline static constexpr unsigned int Class_3_4D7A1C7A7AE5C8DF_TypeDefinitionIndex = 42171;

class Class_3_4D7A1C7A7AE5C8DF : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerExtraPay*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x30
	::System::Single Field_3_3; // 0x38
	::System::Single Field_3_2; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D7A1C7A7AE5C8DF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
