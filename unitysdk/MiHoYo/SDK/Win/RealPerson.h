#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_REALPERSON_AWAKE_OFFSET UNITYSDK_OFFSET(0x182BD330)
#define MIHOYO_SDK_WIN_REALPERSON_BACK_OFFSET UNITYSDK_OFFSET(0x182BE150)
#define MIHOYO_SDK_WIN_REALPERSON_HIDE_OFFSET UNITYSDK_OFFSET(0x182BE170)
#define MIHOYO_SDK_WIN_REALPERSON_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x182BE110)
#define MIHOYO_SDK_WIN_REALPERSON_MEETRULE_OFFSET UNITYSDK_OFFSET(0x182BE130)
#define MIHOYO_SDK_WIN_REALPERSON_NOTVERIFY_OFFSET UNITYSDK_OFFSET(0x182BE1E0)
#define MIHOYO_SDK_WIN_REALPERSON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182BE3E0)
#define MIHOYO_SDK_WIN_REALPERSON_SETREALNAMEINFO_OFFSET UNITYSDK_OFFSET(0x182BE390)
#define MIHOYO_SDK_WIN_REALPERSON_SHOW_OFFSET UNITYSDK_OFFSET(0x182BE010)
#define MIHOYO_SDK_WIN_REALPERSON_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x182BDAB0)
#define MIHOYO_SDK_WIN_REALPERSON__CTOR_OFFSET UNITYSDK_OFFSET(0x182BE400)
#define MIHOYO_SDK_WIN_REALPERSON__NOTVERIFY_B__31_0_OFFSET UNITYSDK_OFFSET(0x182BE440)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealPerson_TypeDefinitionIndex = 9141;

	class RealPerson : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::RealPerson** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealPerson**)Il2CppClass::FromTypeDefinitionIndex(RealPerson_TypeDefinitionIndex)->GetStaticField(0x12680);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* RuleButtonPath; // 0x0
		// static const ::System::String* RuleButtonTextPath; // 0x0
		// static const ::System::String* NameTextPath; // 0x0
		// static const ::System::String* IDTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* questionButton; // 0x60
		::UnityEngine::UI::Button* ruleButton; // 0x68
		::UnityEngine::UI::Text* nameText; // 0x70
		::UnityEngine::UI::Text* idText; // 0x78
		::UnityEngine::UI::Button* submitButton; // 0x80
		::System::Action* OnBack; // 0x88
		::System::Action* OnLogin; // 0x90
		::System::Action* OnLoginWithoutConfirm; // 0x98
		::System::Action* OnRequestRule; // 0xA0
		::System::Action* OnMeetProblem; // 0xA8
		::MiHoYo::SDK::AccountModel* account; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_SHOW_OFFSET))(a1);
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_UPDATETEXT_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void MeetRule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_MEETRULE_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_BACK_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_HIDE_OFFSET))();
		}

		::System::Void NotVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_NOTVERIFY_OFFSET))(this);
		}

		::System::Void SetRealnameInfo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_SETREALNAMEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_ONDESTROY_OFFSET))(this);
		}

		::System::Void _NotVerify_b__31_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON__NOTVERIFY_B__31_0_OFFSET))(this, a1);
		}
	};
}
