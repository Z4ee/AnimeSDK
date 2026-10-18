#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetInstance; }

#define RPG_CLIENT_PET_PETITEMHELPER_CREATEPETINSTANCEITEMDATABYPETINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAB9780)
#define RPG_CLIENT_PET_PETITEMHELPER_CREATEPETINSTANCEITEMDATAIGNORECHROMASWITCH_OFFSET UNITYSDK_OFFSET(0xDAB9AA0)
#define RPG_CLIENT_PET_PETITEMHELPER_CREATEPETITEMDATABYPET_OFFSET UNITYSDK_OFFSET(0xDAB9640)
#define RPG_CLIENT_PET_PETITEMHELPER_FINDITEMIDBYPETID_OFFSET UNITYSDK_OFFSET(0xDAB8EB0)
#define RPG_CLIENT_PET_PETITEMHELPER_FINDPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB8F60)
#define RPG_CLIENT_PET_PETITEMHELPER_ISPETBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB9070)
#define RPG_CLIENT_PET_PETITEMHELPER_TRYFINDBLINDBOXPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB9390)
#define RPG_CLIENT_PET_PETITEMHELPER_TRYFINDNORMALPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB9100)
#define RPG_CLIENT_PET_PETITEMHELPER_TRYFINDPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB9000)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetItemHelper_TypeDefinitionIndex = 75663;

	class PetItemHelper : public ::System::Object
	{
	public:
		static ::System::UInt32 FindItemIdByPetId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_FINDITEMIDBYPETID_OFFSET))(a1);
		}

		static ::System::UInt32 FindPetIdByItemId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_FINDPETIDBYITEMID_OFFSET))(a1);
		}

		static ::System::Boolean IsPetByItemId(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_ISPETBYITEMID_OFFSET))(a1);
		}

		static ::System::Boolean TryFindPetIdByItemId(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_TRYFINDPETIDBYITEMID_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryFindNormalPetIdByItemId(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_TRYFINDNORMALPETIDBYITEMID_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryFindBlindBoxPetIdByItemId(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_TRYFINDBLINDBOXPETIDBYITEMID_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ItemData* CreatePetItemDataByPet(::RPG::Client::Pet::IPet* a1)
		{
			return ((::RPG::Client::ItemData*(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_CREATEPETITEMDATABYPET_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* CreatePetInstanceItemDataByPetInstance(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::RPG::Client::ItemData*(*)(::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_CREATEPETINSTANCEITEMDATABYPETINSTANCE_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* CreatePetInstanceItemDataIgnoreChromaSwitch(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::RPG::Client::ItemData*(*)(::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMHELPER_CREATEPETINSTANCEITEMDATAIGNORECHROMASWITCH_OFFSET))(a1);
		}
	};
}
