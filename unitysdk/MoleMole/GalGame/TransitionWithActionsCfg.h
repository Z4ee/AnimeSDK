#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Struct_2_086C0AADB113D5D4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }
namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TagStringPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CREATTIMECFG_OFFSET UNITYSDK_OFFSET(0x13EE1290)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_POSTSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x13EE1310)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionWithActionsCfg_TypeDefinitionIndex = 86101;

	class TransitionWithActionsCfg : public ::System::Object
	{
	public:
		::System::Boolean IsBegin; // 0x10
		::System::Boolean IsEnd; // 0x11
		::System::String* soundEvent; // 0x18
		::System::Boolean OnlyActions; // 0x20
		::System::Boolean IsTransition; // 0x21
		::System::String* DialogueKey; // 0x28
		::System::Int32 DialogueDelay; // 0x30
		::System::Int32 TransitionID; // 0x34
		::MoleMole::GalGame::ChatSetAvatarVisible SetAvatarVisible; // 0x38
		::System::Boolean SetTagVisible; // 0x3C
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x40
		::System::Int32 avatarId; // 0x48
		::System::String* avatarShowingKey; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>* GroupParams; // 0x58
		::System::Boolean SetDynamicObjectVisible; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>* DynamicObjectsSubID; // 0x68
		::System::Boolean ResetCamera; // 0x70
		::System::Int32 TargetTag; // 0x74
		::System::UInt32 CameraX; // 0x78
		::System::UInt32 CameraY; // 0x7C
		::System::Boolean SetPlayerTransform; // 0x80
		::System::Boolean OutOfValidScenePosition; // 0x81
		::UnityEngine::Vector3 PlayerPos; // 0x84
		::UnityEngine::Vector3 PlayerRot; // 0x90
		::System::UInt32 PlayerCameraX; // 0x9C
		::System::UInt32 PlayerCameraY; // 0xA0
		::System::String* TransformKey; // 0xA8
		::System::Boolean SetClientNpcTransform; // 0xB0
		::System::Int32 ClientNpcTag; // 0xB4
		::System::String* ClientNpcTransformKey; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>* ExClientNpcTag; // 0xC0
		::System::Boolean SetGroupMemberTransform; // 0xC8
		::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>* GroupMemberTransformCfgList; // 0xD0
		::System::Boolean ResetCamera1; // 0xD8
		::MoleMole::GalGame::MainCityChatCameraParam* CameraParam; // 0xE0
		::System::Boolean ModifyTime; // 0xE8
		::ProtoScript::ModTimeType ModType; // 0xEC
		::System::Int32 Minute; // 0xF0
		::System::Int32 TimePeriodNum; // 0xF4
		::System::Int32 DayOfWeek; // 0xF8
		::ProtoScript::TimePeriodType TimePeriod; // 0xFC
		::System::Boolean IgnoreMidnightLimit; // 0x100
		::System::Int32 SetNpcDitherAction; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG__CTOR_OFFSET))(this);
		}

		::Struct_2_086C0AADB113D5D4 CreatTimeCfg()
		{
			return ((::Struct_2_086C0AADB113D5D4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CREATTIMECFG_OFFSET))(this);
		}

		::System::Void PostSoundEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_POSTSOUNDEVENT_OFFSET))(this);
		}
	};
}
