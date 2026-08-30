#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_0E74019F6DE29040_METHOD_3_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0xB5E6300)
#define CLASS_3_0E74019F6DE29040_METHOD_3_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xB5E6050)
#define CLASS_3_0E74019F6DE29040_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xB5E66D0)
#define CLASS_3_0E74019F6DE29040_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E5570)
#define CLASS_3_0E74019F6DE29040_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5E57C0)
#define CLASS_3_0E74019F6DE29040_TICK_OFFSET UNITYSDK_OFFSET(0xB5E5810)
#define CLASS_3_0E74019F6DE29040__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E5520)

inline static constexpr unsigned int Class_3_0E74019F6DE29040_TypeDefinitionIndex = 52445;

class Class_3_0E74019F6DE29040 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerWaitEating*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
	::System::String* EPDMDINOGJO; // 0x30
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* IJDCKBPPNMD; // 0x38
	::System::Boolean IOCHOFBMBKG; // 0x40
	::System::Single PGMIOKKLHIE; // 0x44
	::System::Single MCFPCODHEBK; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_METHOD_3_0D7F0C9DBEFD8449_OFFSET))(this);
	}

	::System::Void Method_3_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_METHOD_3_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E74019F6DE29040_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}
};
