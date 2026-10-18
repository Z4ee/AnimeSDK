#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_CURRENCYCONTROL_OFFSET UNITYSDK_OFFSET(0xD653AF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODEADD_OFFSET UNITYSDK_OFFSET(0xD653E60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODESLASH_OFFSET UNITYSDK_OFFSET(0xD653D00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xD653F10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTADD_OFFSET UNITYSDK_OFFSET(0xD653BA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTCUR_OFFSET UNITYSDK_OFFSET(0xD653C50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTLAST_OFFSET UNITYSDK_OFFSET(0xD653DB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_VALUECHANGEANIM_OFFSET UNITYSDK_OFFSET(0xD6546A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD654980)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRevenueControlBinder_TypeDefinitionIndex = 80047;

	class MechCraftRevenueControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCurrencyControl* get_CurrencyControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCurrencyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_CURRENCYCONTROL_OFFSET))(this);
		}

		::UnityEngine::UI::Slider* get_Slider()
		{
			return ((::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_SLIDER_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextAdd()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTADD_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextLast()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTLAST_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextCur()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTCUR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeSlash()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODESLASH_OFFSET))(this);
		}

		::RPG::Client::UIValueChangeAnimation* get_ValueChangeAnim()
		{
			return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_VALUECHANGEANIM_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeAdd()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODEADD_OFFSET))(this);
		}
	};
}
