#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_DD2A07650CD0727B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xA89B7F0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0xA89B5C0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA89B4C0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA89B840)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA89B9E0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA89B550)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA89B700)
#define RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA89BA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 45879;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Boolean CacheAttack; // 0x10
		::System::Boolean NavigationToTargetRestrict; // 0x11
		::System::Boolean MovingSteerOnly; // 0x12
		::RPG::MVector3 _desiredMoveVector; // 0x14
		::System::Single OverrideTurnSpeed; // 0x20
		::UnityEngine::Vector3 DeltaPosition; // 0x24
		::System::Single MoveTime; // 0x30
		::System::Single DesiredMoveMag; // 0x34
		::System::Single DesireDirectionAngle; // 0x38
		::System::Nullable_1<::Struct_2_DD2A07650CD0727B> NavigationFinishedConstraint; // 0x3C
		::System::Boolean TriggerAlert; // 0x54
		::System::Boolean CacheSkill; // 0x55
		::System::Boolean NavigationMoveCheck; // 0x56
		::System::Boolean TriggerAttack; // 0x57
		::System::Boolean TriggerSkill; // 0x58
		::System::Boolean IsInTurnBack; // 0x59
		::System::Boolean RushMoveFlag; // 0x5A
		::System::Boolean NavigationToTarget; // 0x5B
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x5C
		::RPG::MVector3 DesiredTarget; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET))(this);
		}

		::System::Void ClearSteer(::System::Boolean cleanDesiredDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET))(this, cleanDesiredDir);
		}

		::System::Void ClearMoveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET))(this);
		}

		::System::Void Copy(::RPG::GameCore::CharacterInputData* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET))(this, other);
		}

		::System::Void set_DesiredMoveVector(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET))(this, value);
		}

		::RPG::MVector3 get_DesiredMoveVector()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET))(this);
		}
	};
}
