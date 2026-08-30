#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B080369D27A09C02_WaitEventState.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ElfSpecialEventSelectResultItem; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_B080369D27A09C02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1634BDC0)
#define CLASS_3_B080369D27A09C02_METHOD_3_3CA3FAFFF24017EC_OFFSET UNITYSDK_OFFSET(0x1634C160)
#define CLASS_3_B080369D27A09C02_METHOD_3_4AA0E6806171548C_OFFSET UNITYSDK_OFFSET(0x1634BFB0)
#define CLASS_3_B080369D27A09C02_METHOD_3_54D9F076DD3781B1_OFFSET UNITYSDK_OFFSET(0x1634B970)
#define CLASS_3_B080369D27A09C02_METHOD_3_5BAF196A03E3123F_OFFSET UNITYSDK_OFFSET(0x1634BE10)
#define CLASS_3_B080369D27A09C02_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1634C110)
#define CLASS_3_B080369D27A09C02_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1634BD40)
#define CLASS_3_B080369D27A09C02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1634B1F0)
#define CLASS_3_B080369D27A09C02_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1634B440)
#define CLASS_3_B080369D27A09C02_TICK_OFFSET UNITYSDK_OFFSET(0x1634B490)
#define CLASS_3_B080369D27A09C02__CTOR_OFFSET UNITYSDK_OFFSET(0x1634B1C0)

inline static constexpr unsigned int Class_3_B080369D27A09C02_TypeDefinitionIndex = 52446;

class Class_3_B080369D27A09C02 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x30
	::Class_3_B080369D27A09C02_WaitEventState FFHNGPLFNHI; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEvent*))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_54D9F076DD3781B1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_54D9F076DD3781B1_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_5BAF196A03E3123F(::RPG::GameCore::ElfSpecialEventSelectResultItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfSpecialEventSelectResultItem*))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_5BAF196A03E3123F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4AA0E6806171548C(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_4AA0E6806171548C_OFFSET))(this, a1);
	}

	::System::Void Method_3_3CA3FAFFF24017EC(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_3CA3FAFFF24017EC_OFFSET))(this, a1);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B080369D27A09C02_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
