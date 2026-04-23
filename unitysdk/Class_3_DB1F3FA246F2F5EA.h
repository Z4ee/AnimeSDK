#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutTakeOrder; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DB1F3FA246F2F5EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC0740)
#define CLASS_3_DB1F3FA246F2F5EA_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x11DC05D0)
#define CLASS_3_DB1F3FA246F2F5EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC0040)
#define CLASS_3_DB1F3FA246F2F5EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DC0290)
#define CLASS_3_DB1F3FA246F2F5EA_TICK_OFFSET UNITYSDK_OFFSET(0x11DC02E0)
#define CLASS_3_DB1F3FA246F2F5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC0010)
#define CLASS_3_DB1F3FA246F2F5EA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC07A0)
#define CLASS_3_DB1F3FA246F2F5EA___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11DC0790)

inline static constexpr unsigned int Class_3_DB1F3FA246F2F5EA_TypeDefinitionIndex = 48155;

class Class_3_DB1F3FA246F2F5EA : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x30
	::System::Single Field_3_3; // 0x38
	::System::Boolean Field_3_2; // 0x3C
	::System::Single Field_3_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA_METHOD_3_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB1F3FA246F2F5EA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
