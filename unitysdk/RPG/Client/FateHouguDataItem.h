#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/System/Object.h"

class Class_1_211A085415EC7147;
class Class_1_D17272E82AE804C2_286;
namespace System { class String; }

#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET UNITYSDK_OFFSET(0xA352190)
#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA34D640)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xA34DE90)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUDESC_OFFSET UNITYSDK_OFFSET(0xA34DB30)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0xA3522A0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECT_OFFSET UNITYSDK_OFFSET(0xA34D890)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUICONPATH_OFFSET UNITYSDK_OFFSET(0xA34DD70)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0xA352220)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0xA34D750)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUTYPE_OFFSET UNITYSDK_OFFSET(0xA34DC60)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA352230)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA352240)
#define RPG_CLIENT_FATEHOUGUDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA352210)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguDataItem_TypeDefinitionIndex = 58945;

	class FateHouguDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _HouguID_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 houguID, ::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM__CTOR_OFFSET))(this, houguID, uniqueID);
		}

		static ::RPG::Client::FateHouguDataItem* CreateUnique(::Class_1_D17272E82AE804C2_286* proto)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::Class_1_D17272E82AE804C2_286*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET))(proto);
		}

		static ::RPG::Client::FateHouguDataItem* Create(::System::UInt32 houguID)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET))(houguID);
		}

		::System::UInt32 get_HouguID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUID_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::GameCore::FateHouguType get_HouguType()
		{
			return ((::RPG::GameCore::FateHouguType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUNAME_OFFSET))(this);
		}

		::System::String* get_HouguEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECT_OFFSET))(this);
		}

		::System::String* get_HouguEffectSimple()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECTSIMPLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::System::String* get_HouguIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUICONPATH_OFFSET))(this);
		}

		::Class_1_211A085415EC7147* get__Row()
		{
			return ((::Class_1_211A085415EC7147*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
