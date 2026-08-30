#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_938C223DA5C0C9C7;
class Class_1_97AF24F8EB6B0441;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerTakeOrder; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C06D1E3F44E874CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79B620)
#define CLASS_3_C06D1E3F44E874CA_METHOD_3_3A6D30E631DE7846_OFFSET UNITYSDK_OFFSET(0xB79A830)
#define CLASS_3_C06D1E3F44E874CA_METHOD_3_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0xB799F90)
#define CLASS_3_C06D1E3F44E874CA_METHOD_3_85540E97B27DB250_OFFSET UNITYSDK_OFFSET(0xB79B670)
#define CLASS_3_C06D1E3F44E874CA_METHOD_3_8ABD92AA3DA91FA3_OFFSET UNITYSDK_OFFSET(0xB79AA90)
#define CLASS_3_C06D1E3F44E874CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB799C20)
#define CLASS_3_C06D1E3F44E874CA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB79A1F0)
#define CLASS_3_C06D1E3F44E874CA_TICK_OFFSET UNITYSDK_OFFSET(0xB79A240)
#define CLASS_3_C06D1E3F44E874CA__CTOR_OFFSET UNITYSDK_OFFSET(0xB799BF0)

inline static constexpr unsigned int Class_3_C06D1E3F44E874CA_TypeDefinitionIndex = 52444;

class Class_3_C06D1E3F44E874CA : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* LGHCBKOIBDF; // 0x28
	::Class_1_97AF24F8EB6B0441* NKIPHHIJMIA; // 0x30
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x38
	::Class_1_938C223DA5C0C9C7* GNPMFNMGOLC; // 0x40
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x48
	::System::Single PGMIOKKLHIE; // 0x50
	::System::Int32 LFAKKMKFHGJ; // 0x54
	::RPG::GameCore::LittleGameSmartObjectSlotGroup KIKDJFGDGAO; // 0x58
	::System::Boolean HJBDGPIFELM; // 0x5C
	::System::Boolean BNDLCAADPPO; // 0x5D

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerTakeOrder*))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_METHOD_3_4B16404ED490414F_OFFSET))(this);
	}

	::System::Boolean Method_3_3A6D30E631DE7846()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_METHOD_3_3A6D30E631DE7846_OFFSET))(this);
	}

	::System::Boolean Method_3_8ABD92AA3DA91FA3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_METHOD_3_8ABD92AA3DA91FA3_OFFSET))(this);
	}

	::RPG::Client::ElfRestaurantRecipeData* Method_3_85540E97B27DB250(::System::UInt32 a1)
	{
		return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C06D1E3F44E874CA_METHOD_3_85540E97B27DB250_OFFSET))(this, a1);
	}
};
