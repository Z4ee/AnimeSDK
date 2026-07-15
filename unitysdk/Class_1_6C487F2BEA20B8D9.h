#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }

#define CLASS_1_6C487F2BEA20B8D9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x140D2480)
#define CLASS_1_6C487F2BEA20B8D9_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x140D2440)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_297A485C4F88F7A8_OFFSET UNITYSDK_OFFSET(0x140D3FE0)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_544F1D8EAA9B4FAE_OFFSET UNITYSDK_OFFSET(0x140D2E00)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_A88E8E41DBE6B87B_OFFSET UNITYSDK_OFFSET(0x140D2AB0)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_C9D3A1C812F5D64D_OFFSET UNITYSDK_OFFSET(0x140D44A0)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_F6894B5C37816912_OFFSET UNITYSDK_OFFSET(0x140D45A0)
#define CLASS_1_6C487F2BEA20B8D9_METHOD_1_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0x140D27A0)
#define CLASS_1_6C487F2BEA20B8D9__CTOR_OFFSET UNITYSDK_OFFSET(0x140D23B0)

inline static constexpr unsigned int Class_1_6C487F2BEA20B8D9_TypeDefinitionIndex = 73320;

class Class_1_6C487F2BEA20B8D9 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_1; // 0x18
	::Class_3_F4528A5C0F861AF2* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_297A485C4F88F7A8(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_297A485C4F88F7A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F859CE601F919CF3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_F859CE601F919CF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_544F1D8EAA9B4FAE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_544F1D8EAA9B4FAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6894B5C37816912(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_F6894B5C37816912_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9D3A1C812F5D64D(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_C9D3A1C812F5D64D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A88E8E41DBE6B87B(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6C487F2BEA20B8D9_METHOD_1_A88E8E41DBE6B87B_OFFSET))(this, a1);
	}
};
