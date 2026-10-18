#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_HINTISTARGET_OFFSET UNITYSDK_OFFSET(0xD62CEB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_ICON_OFFSET UNITYSDK_OFFSET(0xD62CF60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xD62D010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD62D0D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTraitDetailAttrControlBinder_TypeDefinitionIndex = 79921;

	class MechCraftCraftProgressAttrTraitDetailAttrControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintIsTarget()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_HINTISTARGET_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Icon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_Text()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILATTRCONTROLBINDER_GET_TEXT_OFFSET))(this);
		}
	};
}
