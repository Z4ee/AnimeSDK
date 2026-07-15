#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHouguDataItem; }
namespace System { class String; }

#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1A5AB7D0)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0x1A5AC550)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUDESC_OFFSET UNITYSDK_OFFSET(0x1A5ABF80)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A5AB8D0)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUEFFECT_OFFSET UNITYSDK_OFFSET(0x1A5ABC40)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUICONPATH_OFFSET UNITYSDK_OFFSET(0x1A5AC370)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1A5AB8B0)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x1A5ABA10)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUTYPE_OFFSET UNITYSDK_OFFSET(0x1A5AC1B0)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM_SET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1A5AB8C0)
#define RPG_CLIENT_FATEHANDBOOKHOUGUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5AB8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookHouguItem_TypeDefinitionIndex = 61152;

	class FateHandbookHouguItem : public ::System::Object
	{
	public:
		::RPG::Client::FateHouguDataItem* _HouguDisplayData; // 0x10
		::System::UInt32 _HouguID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateHandbookHouguItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateHandbookHouguItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_HouguID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUID_OFFSET))(this);
		}

		::System::Void set_HouguID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_SET_HOUGUID_OFFSET))(this, a1);
		}

		::RPG::Client::FateHouguDataItem* get_HouguDisplayData()
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUDISPLAYDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUNAME_OFFSET))(this);
		}

		::System::String* get_HouguEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUEFFECT_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUDESC_OFFSET))(this);
		}

		::RPG::GameCore::FateHouguType get_HouguType()
		{
			return ((::RPG::GameCore::FateHouguType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUTYPE_OFFSET))(this);
		}

		::System::String* get_HouguIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_HOUGUICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUITEM_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}
	};
}
