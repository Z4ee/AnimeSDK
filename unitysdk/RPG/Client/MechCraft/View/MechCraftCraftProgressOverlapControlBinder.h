#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_HINT_OFFSET UNITYSDK_OFFSET(0xD62D4C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD62D890)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_TEXTCURRENT_OFFSET UNITYSDK_OFFSET(0xD62D6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_TEXTMAX_OFFSET UNITYSDK_OFFSET(0xD62D1B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD62D940)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressOverlapControlBinder_TypeDefinitionIndex = 79942;

	class MechCraftCraftProgressOverlapControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextCurrent()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_TEXTCURRENT_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextMax()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_TEXTMAX_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Hint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSOVERLAPCONTROLBINDER_GET_HINT_OFFSET))(this);
		}
	};
}
