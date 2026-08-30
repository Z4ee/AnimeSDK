#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/System/Object.h"

class Class_1_211A085415EC7147;
class Class_1_D17272E82AE804C2_340;
namespace System { class String; }

#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1C196D10)
#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1918F0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x1C1925F0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUDESC_OFFSET UNITYSDK_OFFSET(0x1C192030)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0x1C196E40)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECT_OFFSET UNITYSDK_OFFSET(0x1C191CD0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUICONPATH_OFFSET UNITYSDK_OFFSET(0x1C192400)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1C196DC0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x1C191AC0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUTYPE_OFFSET UNITYSDK_OFFSET(0x1C192230)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C196DD0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C196DE0)
#define RPG_CLIENT_FATEHOUGUDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C196DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguDataItem_TypeDefinitionIndex = 64141;

	class FateHouguDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _HouguID_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::FateHouguDataItem* CreateUnique(::Class_1_D17272E82AE804C2_340* a1)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::Class_1_D17272E82AE804C2_340*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET))(a1);
		}

		static ::RPG::Client::FateHouguDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET))(a1);
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
