#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_DD2A07650CD0727B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xCD48200)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0xCD47FF0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCD47EE0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0xCD48250)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xCD48400)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xCD47F70)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xCD48120)
#define RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD48420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 53237;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Single DesireDirectionAngle; // 0x10
		::System::Nullable_1<::Struct_2_DD2A07650CD0727B> NavigationFinishedConstraint; // 0x14
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x2C
		::RPG::MVector3 DesiredTarget; // 0x30
		::System::Single DesiredMoveMag; // 0x3C
		::System::Single OverrideTurnSpeed; // 0x40
		::UnityEngine::Vector3 DeltaPosition; // 0x44
		::RPG::MVector3 _desiredMoveVector; // 0x50
		::System::Boolean NavigationToTarget; // 0x5C
		::System::Boolean TriggerAttack; // 0x5D
		::System::Boolean NavigationToTargetRestrict; // 0x5E
		::System::Single MoveTime; // 0x60
		::System::Boolean CacheAttack; // 0x64
		::System::Boolean NavigationMoveCheck; // 0x65
		::System::Boolean TriggerSkill; // 0x66
		::System::Boolean TriggerAlert; // 0x67
		::System::Boolean MovingSteerOnly; // 0x68
		::System::Boolean IsInTurnBack; // 0x69
		::System::Boolean CacheSkill; // 0x6A
		::System::Boolean RushMoveFlag; // 0x6B

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

		::System::Void ClearSteer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET))(this, a1);
		}

		::System::Void ClearMoveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET))(this);
		}

		::System::Void Copy(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET))(this, a1);
		}

		::System::Void set_DesiredMoveVector(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_DesiredMoveVector()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET))(this);
		}
	};
}
