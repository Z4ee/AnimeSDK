#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCB33AE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_CLICKCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xCB33D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xCB33D50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCB33D70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xCB33D30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_CLICKCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xCB33DA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xCB33D60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCB33D80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xCB33D40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB33BB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xCB33BD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xCB33CB0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameBuffRewardViewModel_TypeDefinitionIndex = 80072;

	class ChenLingFesGameBuffRewardViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* _TitleText_k__BackingField; // 0x20
		::System::String* _DescText_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::Sofa::Core::SimpleCommand* _ClickCloseCommand_k__BackingField; // 0x38
		::System::String* _IconPath_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel* Create(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Class_1_5F4D64A4B97E38F9* a4)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardViewModel*(*)(::System::String*, ::System::String*, ::System::String*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _Init(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnClickClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL__ONCLICKCLOSE_OFFSET))(this);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_DESCTEXT_OFFSET))(this);
		}

		::System::Void set_DescText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_DESCTEXT_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickCloseCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_GET_CLICKCLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickCloseCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDVIEWMODEL_SET_CLICKCLOSECOMMAND_OFFSET))(this, a1);
		}
	};
}
