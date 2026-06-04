#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Services_1.h"

class Class_1_235F6921BD6EA8D9;
class Class_1_3045BDDBFA69FA59;
class Class_1_38F1A9F0165DAD63;
class Class_1_C8A753BBB389E2BC;
class Class_1_D33B7D6901AE39E9;
class Class_1_EB67B065A0CE0512;
class Class_1_F896A7F19FFA18B0;
class Class_1_FA6AB3C88A3E6365;
class Class_2_579DDCBEB4529D20;
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService; }

#define CLASS_3_F4528A5C0F861AF2_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAC91DD0)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_4FB94B1EADAF1C13_OFFSET UNITYSDK_OFFSET(0xAC781D0)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_9DB68AEB6D14B957_OFFSET UNITYSDK_OFFSET(0xAC91E40)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xAC77310)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC91B80)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xAC91BC0)
#define CLASS_3_F4528A5C0F861AF2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC91B60)

inline static constexpr unsigned int Class_3_F4528A5C0F861AF2_TypeDefinitionIndex = 71110;

class Class_3_F4528A5C0F861AF2 : public ::RPG::Client::LittleGame::Services_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::Class_1_3045BDDBFA69FA59* Field_3_0; // 0x90
	::Class_1_38F1A9F0165DAD63* Field_3_1; // 0x98
	::Class_1_D33B7D6901AE39E9* Field_3_2; // 0xA0
	::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService* Field_3_3; // 0xA8
	::Class_2_579DDCBEB4529D20* Field_3_4; // 0xB0
	::Class_1_FA6AB3C88A3E6365* Field_3_5; // 0xB8
	::Class_1_235F6921BD6EA8D9* Field_3_6; // 0xC0
	::Class_1_EB67B065A0CE0512* Field_3_7; // 0xC8
	::Class_1_F896A7F19FFA18B0* Field_3_8; // 0xD0
	::Class_1_C8A753BBB389E2BC* Field_3_9; // 0xD8
	::RPG::Client::ElfRestaurantModule* Field_3_10; // 0xE0
	::System::Single Field_3_11; // 0xE8
	::System::Boolean Field_3_12; // 0xEC
	::System::Int32 Field_3_13; // 0xF0

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::RPG::Client::ElfRestaurantModule* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::RPG::Client::ElfRestaurantModule*))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_3_4FB94B1EADAF1C13()
	{
		return ((::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_4FB94B1EADAF1C13_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_3_9DB68AEB6D14B957(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_9DB68AEB6D14B957_OFFSET))(this, a1);
	}
};
