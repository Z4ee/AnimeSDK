#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_ICON_OFFSET UNITYSDK_OFFSET(0xD656370)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_NODEANCHOR_OFFSET UNITYSDK_OFFSET(0xD655C40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD6564D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xD656420)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6565D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftProductAttributeControlBinder_TypeDefinitionIndex = 79828;

	class MechCraftProductAttributeControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Icon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_Text()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_TEXT_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeAnchor()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTATTRIBUTECONTROLBINDER_GET_NODEANCHOR_OFFSET))(this);
		}
	};
}
