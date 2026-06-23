#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_84;
namespace MoleMole { class UIGeneralRealAuthenticationDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET UNITYSDK_OFFSET(0x1A252550)
#define CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A251860)
#define CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x1A2525D0)
#define CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A251A20)
#define CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x1A2528D0)
#define CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A251A80)
#define CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x1A2521E0)
#define CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1A251E00)
#define CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1A252650)
#define CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A251990)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A2529E0)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET UNITYSDK_OFFSET(0x1A252A30)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET UNITYSDK_OFFSET(0x1A252A70)
#define CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET UNITYSDK_OFFSET(0x1A252AF0)

inline static constexpr unsigned int CustomSkin_ModifyRealName_TypeDefinitionIndex = 55973;

class CustomSkin_ModifyRealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ModifyRealName** StaticGet__instance()
	{
		return (::CustomSkin_ModifyRealName**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ModifyRealName_TypeDefinitionIndex)->GetStaticField(0x43F40);
	}
	::Class_2_79F6D62CE30E3F8E_84* _view; // 0x18
	::MoleMole::UIGeneralRealAuthenticationDialogPopWindowController* realName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ModifyRealName* Instance()
	{
		return ((::CustomSkin_ModifyRealName*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONSHOW_OFFSET))(this);
	}

	::System::Void SetText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETTEXT_OFFSET))(this);
	}

	::System::Void SetListener()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SETLISTENER_OFFSET))(this);
	}

	::System::Void Back()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_BACK_OFFSET))(this);
	}

	::System::Void MeetProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_MEETPROBLEM_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_0(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_0_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_1(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_1_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_2_OFFSET))(this);
	}

	::System::Void _SetListener_b__7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MODIFYREALNAME__SETLISTENER_B__7_3_OFFSET))(this);
	}
};
