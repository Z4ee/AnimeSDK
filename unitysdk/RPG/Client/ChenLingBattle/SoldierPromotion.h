#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Condition; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_CREATEPREVIEW_OFFSET UNITYSDK_OFFSET(0x93322D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETHANDCARDAFFECTCONDITION_OFFSET UNITYSDK_OFFSET(0x9331B90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x93471A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9347250)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9347270)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9347290)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x9347420)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x93473A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x9346E20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCONDITION_OFFSET UNITYSDK_OFFSET(0x9331F10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDHANDCARD_OFFSET UNITYSDK_OFFSET(0x9346DC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0x9331860)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9347260)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9347280)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x932D780)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion_TypeDefinitionIndex = 62135;

	class SoldierPromotion : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>* Conditions; // 0x18
		::System::Boolean _IsPromotion_k__BackingField; // 0x20
		::System::UInt32 _ConfigID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION__CTOR_OFFSET))(this, configID);
		}

		static ::RPG::Client::ChenLingBattle::SoldierPromotion* CreatePreview(::System::UInt32 configID)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierPromotion*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_CREATEPREVIEW_OFFSET))(configID);
		}

		::System::Void SetPromotion(::System::Boolean isPromotion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SETPROMOTION_OFFSET))(this, isPromotion);
		}

		::System::Boolean IsNeedCondition(::RPG::Client::ChenLingBattle::Condition* condition)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCONDITION_OFFSET))(this, condition);
		}

		::System::Boolean IsNeedHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDHANDCARD_OFFSET))(this, handCard);
		}

		::System::Boolean IsNeedCardConfig(::RPG::Client::ChenLingBattle::CardConfig* card)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCARDCONFIG_OFFSET))(this, card);
		}

		::RPG::Client::ChenLingBattle::Condition* GetHandCardAffectCondition(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETHANDCARDAFFECTCONDITION_OFFSET))(this, handCard);
		}

		::System::String* GetPromotionSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETPROMOTIONSKILLDESC_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_CONFIGID_OFFSET))(this, value);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_ISPROMOTION_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONOUTLINEPATH_OFFSET))(this);
		}
	};
}
