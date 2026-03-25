#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfEventRewardData; }
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }

#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95F4780)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_CONTACTSID_OFFSET UNITYSDK_OFFSET(0x95F4AC0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDDATA_OFFSET UNITYSDK_OFFSET(0x95E16B0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_EVENTREWARDID_OFFSET UNITYSDK_OFFSET(0x95F49D0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x95F47F0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ISEXPENSIVE_OFFSET UNITYSDK_OFFSET(0x95F4B30)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_OPTIONTEXT_OFFSET UNITYSDK_OFFSET(0x95F4950)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x95F48E0)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_RESULTTEXT_OFFSET UNITYSDK_OFFSET(0x95F4A40)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x95F4810)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x95F4880)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x95F4800)
#define RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95F47E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventOptionEffectData_TypeDefinitionIndex = 51719;

	class ElfSelectEventOptionEffectData : public ::System::Object
	{
	public:
		::RPG::Client::ElfEventRewardData* _EventRewardData; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventOptionEffectData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ElfSelectEventOptionEffectData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTOPTIONEFFECTDATA_SET_ID_OFFSET))(this, value);
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
