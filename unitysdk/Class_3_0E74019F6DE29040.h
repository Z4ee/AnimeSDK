#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_0E74019F6DE29040_METHOD_3_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x15FDC4E0)
#define CLASS_3_0E74019F6DE29040_METHOD_3_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x15FDC230)
#define CLASS_3_0E74019F6DE29040_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x15FDC8B0)
#define CLASS_3_0E74019F6DE29040_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FDB750)
#define CLASS_3_0E74019F6DE29040_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15FDB9A0)
#define CLASS_3_0E74019F6DE29040_TICK_OFFSET UNITYSDK_OFFSET(0x15FDB9F0)
#define CLASS_3_0E74019F6DE29040__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDB700)

inline static constexpr unsigned int Class_3_0E74019F6DE29040_TypeDefinitionIndex = 49785;

class Class_3_0E74019F6DE29040 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerWaitEating*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::System::String* Field_3_2; // 0x38
	::System::Boolean Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x44
	::System::Single Field_3_5; // 0x48

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
