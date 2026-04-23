#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_98A08031F550F4C1_5;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::GameCore { class ActivityHipplenEndingRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGDESCTEXT_OFFSET UNITYSDK_OFFSET(0x9AE9600)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGICONPATH_OFFSET UNITYSDK_OFFSET(0x9AE9630)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGTITLETEXT_OFFSET UNITYSDK_OFFSET(0x9AE95D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_EVENTTIMES_OFFSET UNITYSDK_OFFSET(0x9AE9650)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_INTERACTTIMES_OFFSET UNITYSDK_OFFSET(0x9AE9670)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_MINIGAMETIMES_OFFSET UNITYSDK_OFFSET(0x9AE9690)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x9AE9280)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9AE9490)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9AE9290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_EVENTTIMES_OFFSET UNITYSDK_OFFSET(0x9AE9660)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_INTERACTTIMES_OFFSET UNITYSDK_OFFSET(0x9AE9680)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_MINIGAMETIMES_OFFSET UNITYSDK_OFFSET(0x9AE96A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9AE88B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE8840)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEndingGameState_TypeDefinitionIndex = 69571;

	class ActivityHipplenEndingGameState : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenEndingRow* _EndingRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* TraitList; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::HipplenGameGradeType>* GradeTypeList; // 0x20
		::System::UInt32 _InteractTimes_k__BackingField; // 0x28
		::System::UInt32 _EventTimes_k__BackingField; // 0x2C
		::System::UInt32 _MiniGameTimes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_98A08031F550F4C1_5* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE__CTOR_1_OFFSET))(this, ntf);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, game);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::RPG::Client::TextID get_EndingTitleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGTITLETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_EndingDescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGDESCTEXT_OFFSET))(this);
		}

		::System::String* get_EndingIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_ENDINGICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_EventTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_EVENTTIMES_OFFSET))(this);
		}

		::System::Void set_EventTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_EVENTTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_InteractTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_INTERACTTIMES_OFFSET))(this);
		}

		::System::Void set_InteractTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_INTERACTTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_MiniGameTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_GET_MINIGAMETIMES_OFFSET))(this);
		}

		::System::Void set_MiniGameTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENENDINGGAMESTATE_SET_MINIGAMETIMES_OFFSET))(this, value);
		}
	};
}
