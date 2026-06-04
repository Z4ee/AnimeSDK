#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfEventRewardData; }
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }

#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB900330)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_CONTACTSID_OFFSET UNITYSDK_OFFSET(0xB900670)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB9006E0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDID_OFFSET UNITYSDK_OFFSET(0xB900580)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB9003A0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ISEXPENSIVE_OFFSET UNITYSDK_OFFSET(0xB900820)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xB900500)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xB900490)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_RESULTTEXT_OFFSET UNITYSDK_OFFSET(0xB9005F0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB9003C0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB900430)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB9003B0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB900390)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventOptionEffectData_TypeDefinitionIndex = 59597;

	class ElfSelectEventOptionEffectData : public ::System::Object
	{
	public:
		::RPG::Client::ElfEventRewardData* _EventRewardData; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventOptionEffectData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventOptionEffectData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantSelectionType get_Type()
		{
			return ((::RPG::GameCore::RestaurantSelectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_PARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_OptionText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_OPTIONTEXT_OFFSET))(this);
		}

		::System::UInt32 get_EventRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ResultText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_RESULTTEXT_OFFSET))(this);
		}

		::System::UInt32 get_ContactsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_CONTACTSID_OFFSET))(this);
		}

		::RPG::Client::ElfEventRewardData* get_EventRewardData()
		{
			return ((::RPG::Client::ElfEventRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDDATA_OFFSET))(this);
		}

		::System::Boolean get_IsExpensive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ISEXPENSIVE_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantOptionEffectConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantOptionEffectConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET__ROW_OFFSET))(this);
		}
	};
}
