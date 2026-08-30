#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_9B635DC3F867E2EE;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A8E21A00776ACE2B_METHOD_2_260DAE716E3277B2_OFFSET UNITYSDK_OFFSET(0x15B5BBC0)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B5BAD0)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15B5BB10)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15B5BB50)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B5BA90)
#define CLASS_2_A8E21A00776ACE2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15B5BD20)

inline static constexpr unsigned int Class_2_A8E21A00776ACE2B_TypeDefinitionIndex = 53977;

class Class_2_A8E21A00776ACE2B : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_9B635DC3F867E2EE* KICICOHCPIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_260DAE716E3277B2(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_260DAE716E3277B2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
