#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_CURRENCYCONTROL_OFFSET UNITYSDK_OFFSET(0xD65D330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODEADD_OFFSET UNITYSDK_OFFSET(0xD65D6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_NODESLASH_OFFSET UNITYSDK_OFFSET(0xD65D540)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xD65D750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTADD_OFFSET UNITYSDK_OFFSET(0xD65D3E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTCUR_OFFSET UNITYSDK_OFFSET(0xD65D490)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_TEXTLAST_OFFSET UNITYSDK_OFFSET(0xD65D5F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER_GET_VALUECHANGEANIM_OFFSET UNITYSDK_OFFSET(0xD65DEE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD65E1C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRevenueControlBinder_TypeDefinitionIndex = 80048;

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
