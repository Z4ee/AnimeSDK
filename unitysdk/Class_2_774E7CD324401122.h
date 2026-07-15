#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CC76D1702CC17C09_5;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_774E7CD324401122_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x16479E30)
#define CLASS_2_774E7CD324401122_METHOD_2_322530393DCAD1D4_OFFSET UNITYSDK_OFFSET(0x16479360)
#define CLASS_2_774E7CD324401122_METHOD_2_4B325E2272A25B4C_OFFSET UNITYSDK_OFFSET(0x16479810)
#define CLASS_2_774E7CD324401122__CTOR_OFFSET UNITYSDK_OFFSET(0x16479320)

inline static constexpr unsigned int Class_2_774E7CD324401122_TypeDefinitionIndex = 54486;

class Class_2_774E7CD324401122 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureHitConfig* Field_2_0; // 0x68
	::UnityEngine::Transform* Field_2_1; // 0x70
	::RPG::GameCore::GameEntity* Field_2_2; // 0x78
	::Class_1_CC76D1702CC17C09_5* Field_2_3; // 0x80
	::System::Single Field_2_4; // 0x88
	::System::Single Field_2_5; // 0x8C
	::System::Single Field_2_6; // 0x90
	::System::Single Field_2_7; // 0x94
	::System::Single Field_2_8; // 0x98
	::System::Single Field_2_9; // 0x9C
	::System::Single Field_2_10; // 0xA0
	::System::Single Field_2_11; // 0xA4
	::UnityEngine::Vector3 Field_2_12; // 0xA8
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xB4
	::System::Boolean Field_2_14; // 0xB8
	::System::Single Field_2_15; // 0xBC
	::UnityEngine::Vector3 Field_2_16; // 0xC0
	::System::Single Field_2_17; // 0xCC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_774E7CD324401122__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_322530393DCAD1D4(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_774E7CD324401122_METHOD_2_322530393DCAD1D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B325E2272A25B4C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_774E7CD324401122_METHOD_2_4B325E2272A25B4C_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_774E7CD324401122_GET_FLAG_OFFSET))(this);
	}
};
