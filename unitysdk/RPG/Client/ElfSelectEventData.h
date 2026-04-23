#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventBubbleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantSelectEventConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFSELECTEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA27A580)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0xA27A990)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_CONTACTSID_OFFSET UNITYSDK_OFFSET(0xA27A920)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_DESCRIBE_OFFSET UNITYSDK_OFFSET(0xA27A840)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA27A820)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_OPEFFECT1_OFFSET UNITYSDK_OFFSET(0xA27A740)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET_OPEFFECT2_OFFSET UNITYSDK_OFFSET(0xA27A7B0)
#define RPG_CLIENT_ELFSELECTEVENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA27A8C0)
#define RPG_CLIENT_ELFSELECTEVENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA27A830)
#define RPG_CLIENT_ELFSELECTEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA27A730)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventData_TypeDefinitionIndex = 58663;

	class ElfSelectEventData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OpEffect; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ElfSelectEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Describe()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_DESCRIBE_OFFSET))(this);
		}

		::System::UInt32 get_ContactsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_CONTACTSID_OFFSET))(this);
		}

		::System::UInt32 get_OpEffect1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_OPEFFECT1_OFFSET))(this);
		}

		::System::UInt32 get_OpEffect2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_OPEFFECT2_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantSelectEventBubbleType get_BubbleType()
		{
			return ((::RPG::GameCore::RestaurantSelectEventBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET_BUBBLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantSelectEventConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantSelectEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTDATA_GET__ROW_OFFSET))(this);
		}
	};
}
