#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfEventRewardData; }
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }

#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE92380)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_CONTACTSID_OFFSET UNITYSDK_OFFSET(0xCE927D0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDDATA_OFFSET UNITYSDK_OFFSET(0xCE7D8F0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDID_OFFSET UNITYSDK_OFFSET(0xCE92670)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE923F0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ISEXPENSIVE_OFFSET UNITYSDK_OFFSET(0xCE92870)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0xCE925B0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xCE92510)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_RESULTTEXT_OFFSET UNITYSDK_OFFSET(0xCE92710)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCE92410)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCE924B0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCE92400)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE923E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventOptionEffectData_TypeDefinitionIndex = 63735;

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
