#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleBoard; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleFragment; }
namespace RPG::Client::Prop { class RotatePillarPuzzleSwitch; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1483E280)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GETINPUTLASERSLOT_OFFSET UNITYSDK_OFFSET(0x1483DF40)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1483EC80)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISMAINROTATE_OFFSET UNITYSDK_OFFSET(0x1483ECF0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISROTATE_OFFSET UNITYSDK_OFFSET(0x1483ECE0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GOBACKINIT_OFFSET UNITYSDK_OFFSET(0x1483CD20)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_HIDEOUTPUTLASER_OFFSET UNITYSDK_OFFSET(0x1483E3A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_INITRING_OFFSET UNITYSDK_OFFSET(0x1483B9F0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1483EA30)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1483EC90)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_A82BC93906D19A8C_OFFSET UNITYSDK_OFFSET(0x1483E4F0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_DF4DF66B472E49E5_OFFSET UNITYSDK_OFFSET(0x1483E980)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_REFRESHLIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1483C980)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_REGISTERSWITCH_OFFSET UNITYSDK_OFFSET(0x1483E2C0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_ROTATE_OFFSET UNITYSDK_OFFSET(0x1483CFF0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_SELECT_OFFSET UNITYSDK_OFFSET(0x1483E5B0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1483ED00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleRing_TypeDefinitionIndex = 74712;

	class LaserTurnablePuzzleRing : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::Client::Prop::LaserTurnablePuzzleRing* NextInnerRing; // 0x20
		::RPG::Client::Prop::LaserTurnablePuzzleRing* PrevOutterRing; // 0x28
		::System::Boolean IsFinal; // 0x30
		::System::String* CompleteTriggerCustomString; // 0x38
		::RPG::GameCore::GameEntity* Field_5_5; // 0x40
		::UnityEngine::Vector3 RotateDirection; // 0x48
		::System::Int32 RotateDegree; // 0x54
		::System::Int32 InitDegree; // 0x58
		::System::Int32 Field_5_9; // 0x5C
		::System::Boolean Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x61
		::RPG::Client::Prop::LaserTurnablePuzzleBoard* Field_5_12; // 0x68
		::UnityEngine::Animator* Field_5_13; // 0x70
		::System::Collections::IEnumerator* Field_5_14; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotatePillarPuzzleSwitch*>* Field_5_15; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleFragment*>* Field_5_16; // 0x88
		::System::Boolean Field_5_17; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleRing*>* FollowRotateRing; // 0x98
		::System::Single FollowDelay; // 0xA0
		::System::Single RotateSpeed; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING__CTOR_OFFSET))(this);
		}

		::System::Void InitRing(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LaserTurnablePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LaserTurnablePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_INITRING_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshLightStatus(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_REFRESHLIGHTSTATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetInputLaserSlot()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GETINPUTLASERSLOT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_DISPOSE_OFFSET))(this);
		}

		::System::Void RegisterSwitch(::RPG::Client::Prop::RotatePillarPuzzleSwitch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzleSwitch*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_REGISTERSWITCH_OFFSET))(this, a1);
		}

		::System::Void HideOutputLaser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_HIDEOUTPUTLASER_OFFSET))(this);
		}

		::System::Void Rotate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_ROTATE_OFFSET))(this, a1);
		}

		::System::Void GoBackInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GOBACKINIT_OFFSET))(this);
		}

		::System::Void Select(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_SELECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* Method_5_DF4DF66B472E49E5(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_DF4DF66B472E49E5_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* Method_5_A82BC93906D19A8C(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_A82BC93906D19A8C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_218124418542E081_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISROTATE_OFFSET))(this);
		}

		::System::Boolean get_IsMainRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLERING_GET_ISMAINROTATE_OFFSET))(this);
		}
	};
}
