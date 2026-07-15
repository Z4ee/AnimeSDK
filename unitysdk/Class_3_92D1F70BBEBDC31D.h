#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanTable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_92D1F70BBEBDC31D_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x15EF86D0)
#define CLASS_3_92D1F70BBEBDC31D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EF81F0)
#define CLASS_3_92D1F70BBEBDC31D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EF8570)
#define CLASS_3_92D1F70BBEBDC31D_TICK_OFFSET UNITYSDK_OFFSET(0x15EF85C0)
#define CLASS_3_92D1F70BBEBDC31D__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF81C0)

inline static constexpr unsigned int Class_3_92D1F70BBEBDC31D_TypeDefinitionIndex = 49796;

class Class_3_92D1F70BBEBDC31D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterCleanTable*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x38
	::System::Boolean Field_3_3; // 0x3C
	::System::Single Field_3_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*))((::PBYTE)hIl2Cpp + CLASS_3_92D1F70BBEBDC31D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92D1F70BBEBDC31D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92D1F70BBEBDC31D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_92D1F70BBEBDC31D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92D1F70BBEBDC31D_METHOD_3_1E1FFD875CA8014A_OFFSET))(this);
	}
};
