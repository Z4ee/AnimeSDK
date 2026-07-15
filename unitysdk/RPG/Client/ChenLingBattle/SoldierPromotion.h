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

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_CREATEPREVIEW_OFFSET UNITYSDK_OFFSET(0x1AFE7890)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETHANDCARDAFFECTCONDITION_OFFSET UNITYSDK_OFFSET(0x1AFE7E10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x1AFE8130)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1AFE81E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1AFE8200)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFE8220)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x1AFE83A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1AFE8350)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1AFE7B30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCONDITION_OFFSET UNITYSDK_OFFSET(0x1AFE7960)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDHANDCARD_OFFSET UNITYSDK_OFFSET(0x1AFE7AD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SETPROMOTION_OFFSET UNITYSDK_OFFSET(0x1AFE7910)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1AFE81F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1AFE8210)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE7630)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion_TypeDefinitionIndex = 72459;

	class SoldierPromotion : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleSoldierConfig* _Config; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>* Conditions; // 0x18
		::System::Boolean _IsPromotion_k__BackingField; // 0x20
		::System::UInt32 _ConfigID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::SoldierPromotion* CreatePreview(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierPromotion*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_CREATEPREVIEW_OFFSET))(a1);
		}

		::System::Void SetPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SETPROMOTION_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedCondition(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCONDITION_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDHANDCARD_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedCardConfig(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_ISNEEDCARDCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::Condition* GetHandCardAffectCondition(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETHANDCARDAFFECTCONDITION_OFFSET))(this, a1);
		}

		::System::String* GetPromotionSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GETPROMOTIONSKILLDESC_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::Void set_IsPromotion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION_SET_ISPROMOTION_OFFSET))(this, a1);
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
