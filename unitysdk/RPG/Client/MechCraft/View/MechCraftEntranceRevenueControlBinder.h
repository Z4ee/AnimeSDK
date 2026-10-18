#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoNumScrollController; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_LISTDIGITS_OFFSET UNITYSDK_OFFSET(0xD63F990)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_NUMSCROLL_OFFSET UNITYSDK_OFFSET(0xD63F1B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xD63F8E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xD63F830)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_VALUECHANGEANIM_OFFSET UNITYSDK_OFFSET(0xD63F100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD63FA60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftEntranceRevenueControlBinder_TypeDefinitionIndex = 79957;

	class MechCraftEntranceRevenueControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoNumScrollController* get_NumScroll()
		{
			return ((::RPG::Client::MonoNumScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_NUMSCROLL_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_ListDigits()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_LISTDIGITS_OFFSET))(this);
		}

		::RPG::Client::UIValueChangeAnimation* get_ValueChangeAnim()
		{
			return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_VALUECHANGEANIM_OFFSET))(this);
		}

		::UnityEngine::UI::Slider* get_Slider()
		{
			return ((::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_SLIDER_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_Text()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTENTRANCEREVENUECONTROLBINDER_GET_TEXT_OFFSET))(this);
		}
	};
}
