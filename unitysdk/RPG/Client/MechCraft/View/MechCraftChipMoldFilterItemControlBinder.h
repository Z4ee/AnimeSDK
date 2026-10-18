#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD5F40A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_IMGICON_OFFSET UNITYSDK_OFFSET(0xD5F4830)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_NODEICONPANEL_OFFSET UNITYSDK_OFFSET(0xD5F4780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_NODERECOMMENDMARK_OFFSET UNITYSDK_OFFSET(0xD5F4990)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD5F48E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F4C00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftChipMoldFilterItemControlBinder_TypeDefinitionIndex = 79902;

	class MechCraftChipMoldFilterItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeIconPanel()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_NODEICONPANEL_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgIcon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_IMGICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeRecommendMark()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_NODERECOMMENDMARK_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCHIPMOLDFILTERITEMCONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}
	};
}
