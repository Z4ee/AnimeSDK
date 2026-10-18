#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinResBarViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD5F55A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD5F54A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD5F55E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD5F5550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F5FA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD5F5670)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCoinResBarControl_TypeDefinitionIndex = 79812;

	class MechCraftCoinResBarControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x40
		::UnityEngine::UI::Image* _ImgCoin; // 0x48
		::UnityEngine::UI::Text* _TextNum; // 0x50
		::System::String* _IconPath; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINRESBARCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
