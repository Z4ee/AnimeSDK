#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_2201B1A0B73C7EF3;
class Class_1_43BD383C98B4C0C5_257;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameBuffRewardViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA83270)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xCA82840)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA82C70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONBUFFREWARDCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA83A40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCA83580)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCA833C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCA82940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xCA83370)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHICON_OFFSET UNITYSDK_OFFSET(0xCA838E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0xCA83720)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCA83320)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameBuffRewardWindow_TypeDefinitionIndex = 81343;

	class ChenLingFesGameBuffRewardWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Image* _ImageIcon; // 0x48
		::UnityEngine::UI::Button* _BtnClose; // 0x50
		::UnityEngine::UI::Text* _TextDesc; // 0x58
		::Class_1_2201B1A0B73C7EF3* _AssetLoader; // 0x60
		::Class_1_D501FC103C8A2714* _Messenger; // 0x68
		::UnityEngine::UI::Text* _TextTitle; // 0x70

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHTEXT_OFFSET))(this);
		}

		::System::Void _RefreshIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__REFRESHICON_OFFSET))(this);
		}

		::System::Void _OnBuffRewardCloseMessage(::Class_1_43BD383C98B4C0C5_257* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW__ONBUFFREWARDCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
