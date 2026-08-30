#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterHeadConstraint; }

#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_GET_OVERRIDECONSTRAINT_OFFSET UNITYSDK_OFFSET(0xD5841A0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHDOWN_OFFSET UNITYSDK_OFFSET(0xD584220)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHUP_OFFSET UNITYSDK_OFFSET(0xD5841C0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWLEFT_OFFSET UNITYSDK_OFFSET(0xD584280)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWRIGHT_OFFSET UNITYSDK_OFFSET(0xD5842E0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_SET_OVERRIDECONSTRAINT_OFFSET UNITYSDK_OFFSET(0xD5841B0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0xD579B30)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtTargetConstraint_TypeDefinitionIndex = 68445;

	class LookAtTargetConstraint : public ::System::Object
	{
	public:
		::System::Boolean DrawConstraint; // 0x10
		::System::Single PitchUp; // 0x14
		::System::Single PitchDown; // 0x18
		::System::Single YawLeft; // 0x1C
		::System::Single YawRight; // 0x20
		::RPG::GameCore::CharacterHeadConstraint* _OverrideConstraint_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHeadConstraint* get_OverrideConstraint()
		{
			return ((::RPG::GameCore::CharacterHeadConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_GET_OVERRIDECONSTRAINT_OFFSET))(this);
		}

		::System::Void set_OverrideConstraint(::RPG::GameCore::CharacterHeadConstraint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_SET_OVERRIDECONSTRAINT_OFFSET))(this, a1);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_PitchUp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHUP_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_PitchDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHDOWN_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_YawLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWLEFT_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_YawRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWRIGHT_OFFSET))(this);
		}
	};
}
