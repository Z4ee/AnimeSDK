#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFormationPosConfig; }

#define CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_37B19DD467840408_OFFSET UNITYSDK_OFFSET(0x17669D00)
#define CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_B7365BEAE6ABC80E_OFFSET UNITYSDK_OFFSET(0x17669D70)
#define CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1766A770)
#define CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A__CTOR_OFFSET UNITYSDK_OFFSET(0x1766C7D0)

inline static constexpr unsigned int Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A_TypeDefinitionIndex = 59193;

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MBGIFEEHONI; // 0x10
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
	::RPG::GameCore::GameEntity* LIACFBDAIJA; // 0x20
	::UnityEngine::Vector3 MMGLHLBIICB; // 0x28
	::UnityEngine::Vector3 PBLCIKOCKPB; // 0x34
	::System::Single NEIDCIINFHO; // 0x40
	::UnityEngine::Vector3 EPDFFDPDGCI; // 0x44

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_1_37B19DD467840408(::RPG::GameCore::TargetFormationPosConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFormationPosConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_37B19DD467840408_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7365BEAE6ABC80E(::RPG::GameCore::TargetFormationPosConfig* a1, ::RPG::GameCore::TargetFormationPosConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFormationPosConfig*, ::RPG::GameCore::TargetFormationPosConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D_CLASS_1_A4B66D97A840228A_METHOD_1_B7365BEAE6ABC80E_OFFSET))(this, a1, a2);
	}
};
