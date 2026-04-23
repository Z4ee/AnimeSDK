#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_9B635DC3F867E2EE;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_A8E21A00776ACE2B_METHOD_2_260DAE716E3277B2_OFFSET UNITYSDK_OFFSET(0x8FD71C0)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8FD7390)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8FD7330)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8FD70D0)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8FD7110)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x8FD7150)
#define CLASS_2_A8E21A00776ACE2B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8FD7090)
#define CLASS_2_A8E21A00776ACE2B__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD7320)

inline static constexpr unsigned int Class_2_A8E21A00776ACE2B_TypeDefinitionIndex = 49544;

class Class_2_A8E21A00776ACE2B : public ::Class_1_C411A3DD6A930CFA
{
public:
	::Class_1_9B635DC3F867E2EE* Field_2_0; // 0x18

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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8E21A00776ACE2B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
