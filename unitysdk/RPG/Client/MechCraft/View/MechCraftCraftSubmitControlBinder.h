#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD636E00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER_GET_HINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xD637250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD637520)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftSubmitControlBinder_TypeDefinitionIndex = 79946;

	class MechCraftCraftSubmitControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintCanSubmit()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTSUBMITCONTROLBINDER_GET_HINTCANSUBMIT_OFFSET))(this);
		}
	};
}
