#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CC76D1702CC17C09_5;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_774E7CD324401122_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xC293250)
#define CLASS_2_774E7CD324401122_METHOD_2_322530393DCAD1D4_OFFSET UNITYSDK_OFFSET(0xC2927A0)
#define CLASS_2_774E7CD324401122_METHOD_2_4B325E2272A25B4C_OFFSET UNITYSDK_OFFSET(0xC292C30)
#define CLASS_2_774E7CD324401122__CTOR_OFFSET UNITYSDK_OFFSET(0xC292760)

inline static constexpr unsigned int Class_2_774E7CD324401122_TypeDefinitionIndex = 57040;

class Class_2_774E7CD324401122 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::Class_1_CC76D1702CC17C09_5* GKPNBPIGELD; // 0x68
	::RPG::GameCore::AdventureHitConfig* PKDMMBCHHIG; // 0x70
	::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x78
	::UnityEngine::Transform* AFIBNIPMICJ; // 0x80
	::System::Single AOEKHGBJIFP; // 0x88
	::System::Single BFGGMAHHOLF; // 0x8C
	::System::Boolean EHJOLABCMOD; // 0x90
	::System::Single AEBJKGGCGDG; // 0x94
	::System::Single BGKNMHEKMIA; // 0x98
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x9C
	::System::Single HIHIBOIKOOM; // 0xA8
	::System::Single DEEBMCJELGL; // 0xAC
	::System::Single JFJOLFHJKNF; // 0xB0
	::UnityEngine::Vector3 EKKPMIOJMGM; // 0xB4
	::System::Single JALGFHMPGMO; // 0xC0
	::System::Single FAPCGFINDFF; // 0xC4
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xC8
	::System::Single NMMAFJCIBHG; // 0xCC

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
