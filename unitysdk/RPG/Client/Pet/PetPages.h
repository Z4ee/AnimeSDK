#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETPAGES_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDAB8420)
#define RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0xDAB7FA0)
#define RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMFORLUA_OFFSET UNITYSDK_OFFSET(0xDAB7B00)
#define RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMID_OFFSET UNITYSDK_OFFSET(0xDAB8180)
#define RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEM_OFFSET UNITYSDK_OFFSET(0xDAB7DB0)
#define RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGE_OFFSET UNITYSDK_OFFSET(0xDAB79A0)
#define RPG_CLIENT_PET_PETPAGES__SHOWPREVIEWPAGEBYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAB8210)
#define RPG_CLIENT_PET_PETPAGES__TRYCONVERTTOITEMID_OFFSET UNITYSDK_OFFSET(0xDAB80D0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetPages_TypeDefinitionIndex = 75718;

	class PetPages : public ::System::Object
	{
	public:
		static ::RPG::Client::UIController* ShowPreviewPage(::RPG::Client::Pet::IPet* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::Pet::IPet*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* ShowPreviewPageByItemForLua(::System::Object* a1)
		{
			return ((::RPG::Client::UIController*(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMFORLUA_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowPreviewPageByItem(::RPG::Client::ItemData* a1)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEM_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowPreviewPageByItemId(::System::UInt32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMID_OFFSET))(a1);
		}

		static ::RPG::Client::UIController* ShowPreviewPageByItemDisplay(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_SHOWPREVIEWPAGEBYITEMDISPLAY_OFFSET))(a1);
		}

		static ::System::Boolean _TryConvertToItemId(::System::Object* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES__TRYCONVERTTOITEMID_OFFSET))(a1, a2);
		}

		static ::RPG::Client::UIController* _ShowPreviewPageByIdentifier(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES__SHOWPREVIEWPAGEBYIDENTIFIER_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetModule* get__Module()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETPAGES_GET__MODULE_OFFSET))();
		}
	};
}
