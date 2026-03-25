#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkGameStateBase.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenInteractionRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F20400)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_DOSETTLEINTERACT_OFFSET UNITYSDK_OFFSET(0x8F20240)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_INTERACTIONROW_OFFSET UNITYSDK_OFFSET(0x8F207D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0x8F20850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x8F20090)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F201D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_ONREALENTER_OFFSET UNITYSDK_OFFSET(0x8F200A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_SET_INTERACTTYPE_OFFSET UNITYSDK_OFFSET(0x8F20860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F20020)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE__ONCLIENTUNLOCKTRAITS_OFFSET UNITYSDK_OFFSET(0x8F20490)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractGameState_TypeDefinitionIndex = 61665;

	class ActivityHipplenInteractGameState : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedTraitIDs; // 0x18
		::RPG::GameCore::HipplenInteractType _InteractType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE__CTOR_OFFSET))(this, data);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void OnRealEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_ONREALENTER_OFFSET))(this, game);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Void DoSettleInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_DOSETTLEINTERACT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnClientUnlockTraits(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE__ONCLIENTUNLOCKTRAITS_OFFSET))(this, param);
		}

		::RPG::GameCore::ActivityHipplenInteractionRow* get_InteractionRow()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_INTERACTIONROW_OFFSET))(this);
		}

		::RPG::GameCore::HipplenInteractType get_InteractType()
		{
			return ((::RPG::GameCore::HipplenInteractType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_GET_INTERACTTYPE_OFFSET))(this);
		}

		::System::Void set_InteractType(::RPG::GameCore::HipplenInteractType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE_SET_INTERACTTYPE_OFFSET))(this, value);
		}
	};
}
