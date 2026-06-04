#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_90889A2023AB884E_6;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueHintPopupViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD89BB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0xBD88930)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD89070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBD89C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD889D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD89CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD88FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD89DB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBD89E10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD89D50)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupWindows_TypeDefinitionIndex = 73815;

	class LimaoNewsIssueHintPopupWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::LocalizedText* _CancelText; // 0x40
		::RPG::Client::LocalizedText* _SpeakText; // 0x48
		::RPG::Client::LocalizedText* _ConfirmText; // 0x50
		::UnityEngine::Transform* _BtnPanel; // 0x58
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x60
		::RPG::Client::AnimatorButton* _BtnClose; // 0x68
		::RPG::Client::LocalizedText* _ContentText; // 0x70
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x78
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x80

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsIssueHintPopupMessage(::Class_1_90889A2023AB884E_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
