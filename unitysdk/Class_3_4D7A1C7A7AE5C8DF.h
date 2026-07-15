#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerExtraPay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D7A1C7A7AE5C8DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B3D6C0)
#define CLASS_3_4D7A1C7A7AE5C8DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B3D1C0)
#define CLASS_3_4D7A1C7A7AE5C8DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B3D4F0)
#define CLASS_3_4D7A1C7A7AE5C8DF_TICK_OFFSET UNITYSDK_OFFSET(0x14B3D540)
#define CLASS_3_4D7A1C7A7AE5C8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x14B3D1A0)

inline static constexpr unsigned int Class_3_4D7A1C7A7AE5C8DF_TypeDefinitionIndex = 49781;

class Class_3_4D7A1C7A7AE5C8DF : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerExtraPay*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x3C

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
};
