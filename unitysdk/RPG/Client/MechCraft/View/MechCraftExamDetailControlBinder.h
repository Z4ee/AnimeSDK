#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentTreeEntranceControl; }
namespace Sofa { class ShortCutHintControl; }
namespace SuperScrollView { class LoopGridView; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_ASSISTANTLIST_OFFSET UNITYSDK_OFFSET(0xD638D40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_BTNCLOSE_OFFSET UNITYSDK_OFFSET(0xD637C90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0xD637D40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET UNITYSDK_OFFSET(0xD637A80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_REQUIREMENTINFOLIST_OFFSET UNITYSDK_OFFSET(0xD6389E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_SHORTCUTHINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD6379C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TALENTTREEENTRANCECONTROL_OFFSET UNITYSDK_OFFSET(0xD637DF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TEXTEXAMINERNAME_OFFSET UNITYSDK_OFFSET(0xD637B30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xD637BE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD639500)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamDetailControlBinder_TypeDefinitionIndex = 79959;

	class MechCraftExamDetailControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgExaminerHead()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextExaminerName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TEXTEXAMINERNAME_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_RequirementInfoList()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_REQUIREMENTINFOLIST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridView* get_AssistantList()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_ASSISTANTLIST_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnConfirm()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_BTNCONFIRM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnClose()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_BTNCLOSE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentTreeEntranceControl* get_TalentTreeEntranceControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentTreeEntranceControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_TALENTTREEENTRANCECONTROL_OFFSET))(this);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHintControl()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROLBINDER_GET_SHORTCUTHINTCONTROL_OFFSET))(this);
		}
	};
}
