#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class SpritePresetController; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_IMGCUSTOMER_OFFSET UNITYSDK_OFFSET(0xD6323A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_SPRITEPRESET_OFFSET UNITYSDK_OFFSET(0xD632500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_TEXTCUSTOMERNAME_OFFSET UNITYSDK_OFFSET(0xD632450)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6325C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCustomerActorControlBinder_TypeDefinitionIndex = 79985;

	class MechCraftCustomerActorControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgCustomer()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_IMGCUSTOMER_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextCustomerName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_TEXTCUSTOMERNAME_OFFSET))(this);
		}

		::RPG::Client::SpritePresetController* get_SpritePreset()
		{
			return ((::RPG::Client::SpritePresetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCUSTOMERACTORCONTROLBINDER_GET_SPRITEPRESET_OFFSET))(this);
		}
	};
}
