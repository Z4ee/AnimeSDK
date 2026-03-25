#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C0AF4F8C8F8BE222_EatingState.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_157150C3CF1EE88C_OFFSET UNITYSDK_OFFSET(0xD1A3B90)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xD1A4150)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xD1A2E40)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xD1A31C0)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_46C82739F5C85B18_OFFSET UNITYSDK_OFFSET(0xD1A36A0)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_495115E0F6EE5B14_OFFSET UNITYSDK_OFFSET(0xD1A0780)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_1_OFFSET UNITYSDK_OFFSET(0xD1A1630)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_2_OFFSET UNITYSDK_OFFSET(0xD1A1B20)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_OFFSET UNITYSDK_OFFSET(0xD1A1140)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xD1A2010)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_A0D176118EE280F6_OFFSET UNITYSDK_OFFSET(0xD1A26F0)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xD1A2B80)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0xD1A3570)
#define CLASS_3_C0AF4F8C8F8BE222_METHOD_3_EA5ADB91FAB174B1_OFFSET UNITYSDK_OFFSET(0xD1A49D0)
#define CLASS_3_C0AF4F8C8F8BE222_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD19F260)
#define CLASS_3_C0AF4F8C8F8BE222_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1A0010)
#define CLASS_3_C0AF4F8C8F8BE222_TICK_OFFSET UNITYSDK_OFFSET(0xD1A0060)
#define CLASS_3_C0AF4F8C8F8BE222__CTOR_OFFSET UNITYSDK_OFFSET(0xD19F240)
#define CLASS_3_C0AF4F8C8F8BE222__TICK_B__3_0_OFFSET UNITYSDK_OFFSET(0xD1A5000)
#define CLASS_3_C0AF4F8C8F8BE222___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD1A5250)
#define CLASS_3_C0AF4F8C8F8BE222___ONCOMPLETEEATING_B__5_0_OFFSET UNITYSDK_OFFSET(0xD1A5090)
#define CLASS_3_C0AF4F8C8F8BE222___ONPAYING_B__11_0_OFFSET UNITYSDK_OFFSET(0xD1A5120)
#define CLASS_3_C0AF4F8C8F8BE222___ONPAYING_B__11_1_OFFSET UNITYSDK_OFFSET(0xD1A51C0)

inline static constexpr unsigned int Class_3_C0AF4F8C8F8BE222_TypeDefinitionIndex = 42169;

class Class_3_C0AF4F8C8F8BE222 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerEating*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_3; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_2; // 0x30
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x38
	::Class_3_C0AF4F8C8F8BE222_EatingState Field_3_0; // 0x40
	::System::Single Field_3_9; // 0x44
	::System::Boolean Field_3_6; // 0x48
	::System::Boolean Field_3_5; // 0x49
	::System::Single Field_3_7; // 0x4C
	::System::Single Field_3_8; // 0x50
	::System::Single Field_3_4; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_495115E0F6EE5B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_495115E0F6EE5B14_OFFSET))(this);
	}

	::System::Void Method_3_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_D460587695D41831_OFFSET))(this);
	}

	::System::Boolean Method_3_7D8DC7460DC5B539()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_OFFSET))(this);
	}

	::System::Boolean Method_3_7D8DC7460DC5B539_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_1_OFFSET))(this);
	}

	::System::Boolean Method_3_7D8DC7460DC5B539_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_7D8DC7460DC5B539_2_OFFSET))(this);
	}

	::System::Boolean Method_3_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_3_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_3_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Boolean Method_3_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Int32 Method_3_157150C3CF1EE88C(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_157150C3CF1EE88C_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0D176118EE280F6(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_A0D176118EE280F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA5ADB91FAB174B1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_EA5ADB91FAB174B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_46C82739F5C85B18(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Int32, ::RPG::GameCore::LittleGameSmartObjectSlotGroup))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222_METHOD_3_46C82739F5C85B18_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Tick_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222__TICK_B__3_0_OFFSET))(this);
	}

	::System::Void __OnCompleteEating_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222___ONCOMPLETEEATING_B__5_0_OFFSET))(this);
	}

	::System::Void __OnPaying_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222___ONPAYING_B__11_0_OFFSET))(this);
	}

	::System::Void __OnPaying_b__11_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222___ONPAYING_B__11_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C0AF4F8C8F8BE222___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
