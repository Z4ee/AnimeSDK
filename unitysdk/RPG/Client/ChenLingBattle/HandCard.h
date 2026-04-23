#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_157;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Condition; }
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_CREATE_OFFSET UNITYSDK_OFFSET(0x9F942F0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETDESC_OFFSET UNITYSDK_OFFSET(0x9FA77F0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETSOLDIERPROMOTIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x9FA7510)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x9FA7850)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9FA79A0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x9FA7940)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FA7910)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FA78D0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9F96520)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9FA7890)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F949B0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9FA7870)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9FA7970)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET__EFFECTGRIDPRESHOW_OFFSET UNITYSDK_OFFSET(0x9FA77C0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_ISINEFFECTGRID_OFFSET UNITYSDK_OFFSET(0x9FA76B0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x9FA7860)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9FA79B0)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9FA7880)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SYNC_OFFSET UNITYSDK_OFFSET(0x9F94280)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7500)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int HandCard_TypeDefinitionIndex = 70125;

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

		static ::RPG::Client::ChenLingBattle::HandCard* Create(::Class_1_D17272E82AE804C2_157* handCardProto)
		{
			return ((::RPG::Client::ChenLingBattle::HandCard*(*)(::Class_1_D17272E82AE804C2_157*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_CREATE_OFFSET))(handCardProto);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_157* handCardProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_157*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SYNC_OFFSET))(this, handCardProto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>* GetSoldierPromotionConditionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Condition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETSOLDIERPROMOTIONCONDITIONLIST_OFFSET))(this);
		}

		::System::Boolean IsInEffectGrid(::System::Int32 offsetX, ::System::Int32 offsetY)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_ISINEFFECTGRID_OFFSET))(this, offsetX, offsetY);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_CardId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_CARDID_OFFSET))(this);
		}

		::System::Void set_CardId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_UNIQUEID_OFFSET))(this, value);
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

		::System::Void set_Config(::RPG::Client::ChenLingBattle::CardConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD_SET_CONFIG_OFFSET))(this, value);
		}
	};
}
