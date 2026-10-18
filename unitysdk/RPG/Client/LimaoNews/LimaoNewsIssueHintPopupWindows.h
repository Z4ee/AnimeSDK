#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_90889A2023AB884E_12;
class Class_1_D501FC103C8A2714;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueHintPopupViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3B6290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B5030)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3B57B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD3B6340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3B5110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3B63D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3B56F0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupWindows_TypeDefinitionIndex = 80371;

	class LimaoNewsIssueHintPopupWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::Transform* _BtnPanel; // 0x48
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x50
		::RPG::Client::LocalizedText* _ContentText; // 0x58
		::RPG::Client::LocalizedText* _SpeakText; // 0x60
		::RPG::Client::AnimatorButton* _BtnClose; // 0x68
		::RPG::Client::LocalizedText* _CancelText; // 0x70
		::RPG::Client::LocalizedText* _ConfirmText; // 0x78
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x80
		::Class_1_D501FC103C8A2714* _Messenger; // 0x88

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void _OnLimaoNewsIssueHintPopupMessage(::Class_1_90889A2023AB884E_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS__ONLIMAONEWSISSUEHINTPOPUPMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueHintPopupViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
