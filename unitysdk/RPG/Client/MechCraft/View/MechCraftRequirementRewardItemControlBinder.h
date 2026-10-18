#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::MechCraft::View { class MechCraftCoinIconControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_COINICON_OFFSET UNITYSDK_OFFSET(0xD652CE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_COINROOT_OFFSET UNITYSDK_OFFSET(0xD652C30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD652B80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_TEXTNUM_OFFSET UNITYSDK_OFFSET(0xD652D90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD652E50)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRequirementRewardItemControlBinder_TypeDefinitionIndex = 80000;

	class MechCraftRequirementRewardItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCoinIconControl* get_CoinIcon()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCoinIconControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_COINICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextNum()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_TEXTNUM_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_CoinRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREQUIREMENTREWARDITEMCONTROLBINDER_GET_COINROOT_OFFSET))(this);
		}
	};
}
