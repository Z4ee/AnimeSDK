#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class PetInstanceItemData; }
namespace RPG::Client { class PetItemData; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETBYITEM_1_OFFSET UNITYSDK_OFFSET(0xDAB7E40)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETBYITEM_OFFSET UNITYSDK_OFFSET(0xDAB7B40)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETINSTANCEBYITEM_OFFSET UNITYSDK_OFFSET(0xDAB7E90)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDAB7D10)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_1_OFFSET UNITYSDK_OFFSET(0xDAB8CF0)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_2_OFFSET UNITYSDK_OFFSET(0xDAB8DB0)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xDAB8C20)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSOLOSUMMONED_1_OFFSET UNITYSDK_OFFSET(0xDAB8630)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSOLOSUMMONED_OFFSET UNITYSDK_OFFSET(0xDAB85A0)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSUMMONED_1_OFFSET UNITYSDK_OFFSET(0xDAB80B0)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSUMMONED_OFFSET UNITYSDK_OFFSET(0xDAB8020)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_1_OFFSET UNITYSDK_OFFSET(0xDAB8A50)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_2_OFFSET UNITYSDK_OFFSET(0xDAB8B20)
#define RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_OFFSET UNITYSDK_OFFSET(0xDAB89B0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetItemDataExtensions_TypeDefinitionIndex = 75662;

	class PetItemDataExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::IPet* FindPetByItem(::RPG::Client::PetItemData* a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::PetItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETBYITEM_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::IPet* FindPetByItem_1(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETBYITEM_1_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::IPetInstance* FindPetInstanceByItem(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_FINDPETINSTANCEBYITEM_OFFSET))(a1);
		}

		static ::System::Boolean IsPetSummoned(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSUMMONED_OFFSET))(a1);
		}

		static ::System::Boolean IsPetSummoned_1(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSUMMONED_1_OFFSET))(a1);
		}

		static ::System::Boolean IsPetSoloSummoned(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSOLOSUMMONED_OFFSET))(a1);
		}

		static ::System::Boolean IsPetSoloSummoned_1(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETSOLOSUMMONED_1_OFFSET))(a1);
		}

		static ::System::Boolean IsPetWithChroma(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_OFFSET))(a1);
		}

		static ::System::Boolean IsPetWithChroma_1(::RPG::Client::PetItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_1_OFFSET))(a1);
		}

		static ::System::Boolean IsPetWithChroma_2(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISPETWITHCHROMA_2_OFFSET))(a1);
		}

		static ::System::Boolean IsBlindBoxPet(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_OFFSET))(a1);
		}

		static ::System::Boolean IsBlindBoxPet_1(::RPG::Client::PetItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_1_OFFSET))(a1);
		}

		static ::System::Boolean IsBlindBoxPet_2(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_ISBLINDBOXPET_2_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetModule* get__Module()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETITEMDATAEXTENSIONS_GET__MODULE_OFFSET))();
		}
	};
}
