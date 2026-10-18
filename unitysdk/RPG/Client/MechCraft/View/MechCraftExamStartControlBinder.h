#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace Sofa { class ShortCutHintControl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_BTNBACK_OFFSET UNITYSDK_OFFSET(0xD644600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_BTNCONTINUE_OFFSET UNITYSDK_OFFSET(0xD6446B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_FADEINANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD644550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET UNITYSDK_OFFSET(0xD644760)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_SHORTCUTHINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD644490)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD6448C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD644810)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD644D60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartControlBinder_TypeDefinitionIndex = 79966;

	class MechCraftExamStartControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnBack()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_BTNBACK_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnContinue()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_BTNCONTINUE_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgExaminerHead()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_FadeInAnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_FADEINANIMTRIGGER_OFFSET))(this);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHintControl()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROLBINDER_GET_SHORTCUTHINTCONTROL_OFFSET))(this);
		}
	};
}
