#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanTable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_92D1F70BBEBDC31D_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xBB6F720)
#define CLASS_3_92D1F70BBEBDC31D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB6F240)
#define CLASS_3_92D1F70BBEBDC31D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB6F5C0)
#define CLASS_3_92D1F70BBEBDC31D_TICK_OFFSET UNITYSDK_OFFSET(0xBB6F610)
#define CLASS_3_92D1F70BBEBDC31D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6F210)

inline static constexpr unsigned int Class_3_92D1F70BBEBDC31D_TypeDefinitionIndex = 52169;

class Class_3_92D1F70BBEBDC31D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterCleanTable*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* OFLDOAIGGDH; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x30
	::System::Boolean BIGCMCKDGCC; // 0x38
	::System::Single MIIEMGLCLNF; // 0x3C
	::System::Single GAELKHODKJP; // 0x40

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
