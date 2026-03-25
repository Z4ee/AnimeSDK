#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CC76D1702CC17C09_4;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_ED337380FE6785CF_1_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x108D63B0)
#define CLASS_2_ED337380FE6785CF_1_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x108D63C0)
#define CLASS_2_ED337380FE6785CF_1_METHOD_2_425DF5FD9620428C_OFFSET UNITYSDK_OFFSET(0x108D58D0)
#define CLASS_2_ED337380FE6785CF_1_METHOD_2_4B325E2272A25B4C_OFFSET UNITYSDK_OFFSET(0x108D5D90)
#define CLASS_2_ED337380FE6785CF_1_METHOD_2_950550245E8D7E06_OFFSET UNITYSDK_OFFSET(0x108D6430)
#define CLASS_2_ED337380FE6785CF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x108D5890)

inline static constexpr unsigned int Class_2_ED337380FE6785CF_1_TypeDefinitionIndex = 45913;

class Class_2_ED337380FE6785CF_1 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureHitConfig* Field_2_13; // 0x68
	::RPG::GameCore::GameEntity* Field_2_0; // 0x70
	::UnityEngine::Transform* Field_2_1; // 0x78
	::Class_1_CC76D1702CC17C09_4* Field_2_14; // 0x80
	::System::Single Field_2_5; // 0x88
	::System::Single Field_2_11; // 0x8C
	::System::Single Field_2_15; // 0x90
	::UnityEngine::Vector3 Field_2_3; // 0x94
	::System::Single Field_2_12; // 0xA0
	::System::Single Field_2_6; // 0xA4
	::System::Boolean Field_2_4; // 0xA8
	::System::Single Field_2_8; // 0xAC
	::System::Single Field_2_7; // 0xB0
	::System::Single Field_2_16; // 0xB4
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xB8
	::UnityEngine::Vector3 Field_2_2; // 0xBC
	::System::Single Field_2_10; // 0xC8
	::System::Single Field_2_9; // 0xCC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_425DF5FD9620428C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1_METHOD_2_425DF5FD9620428C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B325E2272A25B4C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1_METHOD_2_4B325E2272A25B4C_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_950550245E8D7E06(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED337380FE6785CF_1_METHOD_2_950550245E8D7E06_OFFSET))(this, P0);
	}
};
