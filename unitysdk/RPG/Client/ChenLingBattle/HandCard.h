#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_178;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Condition; }
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1AFD8010)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETDESC_OFFSET UNITYSDK_OFFSET(0x1AFD86A0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETSOLDIERPROMOTIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x1AFD8160)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1AFD8770)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AFD8B70)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x1AFD89F0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AFD8970)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFD8890)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1AFD8A70)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1AFD87B0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AFD83D0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AFD8790)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1AFD8AF0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET__EFFECTGRIDPRESHOW_OFFSET UNITYSDK_OFFSET(0x1AFD8620)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_ISINEFFECTGRID_OFFSET UNITYSDK_OFFSET(0x1AFD84A0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1AFD8780)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1AFD8B80)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AFD87A0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SYNC_OFFSET UNITYSDK_OFFSET(0x1AFD80F0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD80E0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int HandCard_TypeDefinitionIndex = 72450;

	class HandCard : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::CardConfig* _Config_k__BackingField; // 0x10
		::System::UInt32 _CardId_k__BackingField; // 0x18
		::System::UInt32 _UniqueID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingBattle::HandCard* Create(::Class_1_D17272E82AE804C2_178* a1)
		{
			return ((::RPG::Client::ChenLingBattle::HandCard*(*)(::Class_1_D17272E82AE804C2_178*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_178* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_178*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>* GetSoldierPromotionConditionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETSOLDIERPROMOTIONCONDITIONLIST_OFFSET))(this);
		}

		::System::Boolean IsInEffectGrid(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_ISINEFFECTGRID_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_CardId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CARDID_OFFSET))(this);
		}

		::System::Void set_CardId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingCardType get_Type()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONOUTLINEPATH_OFFSET))(this);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPEID_OFFSET))(this);
		}

		::System::UInt32 get_Weight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_WEIGHT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>* get__EffectGridPreShow()
		{
			return ((::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET__EFFECTGRIDPRESHOW_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::CardConfig* get_Config()
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CONFIG_OFFSET))(this, a1);
		}
	};
}
