#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::MechCraft::View { class MechCraftCoinIconControl; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_COINICONCONTROL_OFFSET UNITYSDK_OFFSET(0xD654360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_NODEREVENUE_OFFSET UNITYSDK_OFFSET(0xD654250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_REVENUESLIDER_OFFSET UNITYSDK_OFFSET(0xD6545F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTCURREVENUE_OFFSET UNITYSDK_OFFSET(0xD654410)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTTIPS_OFFSET UNITYSDK_OFFSET(0xD654160)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTTOTALREVENUE_OFFSET UNITYSDK_OFFSET(0xD654500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6546B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderSelectTipsControlBinder_TypeDefinitionIndex = 80006;

	class MechCraftOrderSelectTipsControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextTips()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTTIPS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeRevenue()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_NODEREVENUE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCoinIconControl* get_CoinIconControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCoinIconControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_COINICONCONTROL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextCurRevenue()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTCURREVENUE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextTotalRevenue()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_TEXTTOTALREVENUE_OFFSET))(this);
		}

		::UnityEngine::UI::Slider* get_RevenueSlider()
		{
			return ((::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROLBINDER_GET_REVENUESLIDER_OFFSET))(this);
		}
	};
}
