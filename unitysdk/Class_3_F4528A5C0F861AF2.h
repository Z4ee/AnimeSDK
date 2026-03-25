#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Services_1.h"

class Class_1_11A601EC692AC3BC;
class Class_1_235F6921BD6EA8D9;
class Class_1_3045BDDBFA69FA59;
class Class_1_38F1A9F0165DAD63;
class Class_1_867B6CE75953535A;
class Class_1_C8A753BBB389E2BC;
class Class_1_EB67B065A0CE0512;
class Class_1_F896A7F19FFA18B0;
class Class_2_235EAE06A792DE91;
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService; }

#define CLASS_3_F4528A5C0F861AF2_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1177AAC0)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_42D44BFB373F39F8_OFFSET UNITYSDK_OFFSET(0x1177AA50)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_A00C84EAF431BAA3_OFFSET UNITYSDK_OFFSET(0x1177AB90)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_C7AA0B5353D21688_OFFSET UNITYSDK_OFFSET(0x1177AB30)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1177A800)
#define CLASS_3_F4528A5C0F861AF2_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1177A840)
#define CLASS_3_F4528A5C0F861AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1177A7E0)

inline static constexpr unsigned int Class_3_F4528A5C0F861AF2_TypeDefinitionIndex = 62295;

class Class_3_F4528A5C0F861AF2 : public ::RPG::Client::LittleGame::Services_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::Class_1_867B6CE75953535A* Field_3_3; // 0x90
	::Class_1_38F1A9F0165DAD63* Field_3_12; // 0x98
	::Class_2_235EAE06A792DE91* Field_3_5; // 0xA0
	::Class_1_11A601EC692AC3BC* Field_3_8; // 0xA8
	::Class_1_F896A7F19FFA18B0* Field_3_6; // 0xB0
	::Class_1_235F6921BD6EA8D9* Field_3_10; // 0xB8
	::Class_1_EB67B065A0CE0512* Field_3_11; // 0xC0
	::RPG::Client::ElfRestaurantModule* Field_3_13; // 0xC8
	::Class_1_C8A753BBB389E2BC* Field_3_7; // 0xD0
	::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService* Field_3_9; // 0xD8
	::Class_1_3045BDDBFA69FA59* Field_3_4; // 0xE0
	::System::Int32 Field_3_0; // 0xE8
	::System::Single Field_3_1; // 0xEC
	::System::Boolean Field_3_2; // 0xF0

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::RPG::Client::ElfRestaurantModule* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::RPG::Client::ElfRestaurantModule*))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_3_42D44BFB373F39F8()
	{
		return ((::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_42D44BFB373F39F8_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_3_C7AA0B5353D21688()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_C7AA0B5353D21688_OFFSET))(this);
	}

	::System::Void Method_3_A00C84EAF431BAA3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F4528A5C0F861AF2_METHOD_3_A00C84EAF431BAA3_OFFSET))(this, a1);
	}
};
