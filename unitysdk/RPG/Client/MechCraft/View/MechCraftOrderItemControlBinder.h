#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MechCraft::View { class MechCraftActorHeadControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_ANIM_OFFSET UNITYSDK_OFFSET(0xD6447B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_BTNORDER_OFFSET UNITYSDK_OFFSET(0xD644860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET UNITYSDK_OFFSET(0xD6449D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_CUSTOMERCONTROL_OFFSET UNITYSDK_OFFSET(0xD644920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_STARLISTCONTROL_OFFSET UNITYSDK_OFFSET(0xD644A80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_STARLOADMETA_OFFSET UNITYSDK_OFFSET(0xD6451C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD645270)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderItemControlBinder_TypeDefinitionIndex = 80015;

	class MechCraftOrderItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftActorHeadControl* get_CustomerControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftActorHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_CUSTOMERCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCurrencyControl* get_CurrencyControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCurrencyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_StarListControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_STARLISTCONTROL_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_StarLoadMeta()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_STARLOADMETA_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnOrder()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_BTNORDER_OFFSET))(this);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERITEMCONTROLBINDER_GET_ANIM_OFFSET))(this);
		}
	};
}
