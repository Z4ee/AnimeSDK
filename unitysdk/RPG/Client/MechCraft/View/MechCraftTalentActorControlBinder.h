#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_IMGICON_OFFSET UNITYSDK_OFFSET(0xD65CCC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD65CE20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD65CD70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD65CEE0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentActorControlBinder_TypeDefinitionIndex = 80062;

	class MechCraftTalentActorControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgIcon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_IMGICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}
	};
}
