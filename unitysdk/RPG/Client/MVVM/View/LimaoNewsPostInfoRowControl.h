#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class TutorialNode;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client::MVVM::View { class LimaoNewsInteractionControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsStateTagControl; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_A62231621CE60BD0_OFFSET UNITYSDK_OFFSET(0x9AA1C70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x9AA1E60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x9AA1E10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYADDANIMATION_OFFSET UNITYSDK_OFFSET(0x9A95D40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x9A95DA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYLIKENUMANIMATION_OFFSET UNITYSDK_OFFSET(0x9AA1C10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA1FF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA1250)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA09B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA2060)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA2000)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl_TypeDefinitionIndex = 61010;

	class LimaoNewsPostInfoRowControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* Field_6_0; // 0x30
		::RPG::Client::AnimatorButton* Field_6_1; // 0x38
		::UnityEngine::Animation* Field_6_2; // 0x40
		::UnityEngine::Animation* Field_6_3; // 0x48
		::UnityEngine::UI::Image* Field_6_4; // 0x50
		::UnityEngine::UI::Text* Field_6_5; // 0x58
		::UnityEngine::Transform* Field_6_6; // 0x60
		::UnityEngine::UI::Text* Field_6_7; // 0x68
		::UnityEngine::UI::Text* Field_6_8; // 0x70
		::UnityEngine::Transform* Field_6_9; // 0x78
		::UnityEngine::Transform* Field_6_10; // 0x80
		::UnityEngine::Transform* Field_6_11; // 0x88
		::UnityEngine::UI::Image* Field_6_12; // 0x90
		::UnityEngine::Transform* Field_6_13; // 0x98
		::UnityEngine::Transform* Field_6_14; // 0xA0
		::UnityEngine::Transform* Field_6_15; // 0xA8
		::RPG::Client::MVVM::View::LimaoNewsInteractionControl* Field_6_16; // 0xB0
		::UnityEngine::Animation* Field_6_17; // 0xB8
		::RPG::Client::MVVM::View::LimaoNewsStateTagControl* Field_6_18; // 0xC0
		::TutorialNode* Field_6_19; // 0xC8
		::UnityEngine::Transform* Field_6_20; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayAddAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYADDANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PlayFadeInAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYFADEINANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PlayLikeNumAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_PLAYLIKENUMANIMATION_OFFSET))(this, a1);
		}

		::System::Void Method_6_F7300E87EC49A206()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_F7300E87EC49A206_OFFSET))(this);
		}

		::System::Void Method_6_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* Method_6_A62231621CE60BD0(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL_METHOD_6_A62231621CE60BD0_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
