#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALPERSONMANAGER_CHECKREALPERSON_OFFSET UNITYSDK_OFFSET(0x1D1F4430)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_HIDEREALPERSON_OFFSET UNITYSDK_OFFSET(0x1D1F4AE0)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x1D1F4CC0)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_MEETRULE_OFFSET UNITYSDK_OFFSET(0x1D1F4E40)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_NOTVERIFY_OFFSET UNITYSDK_OFFSET(0x1D1F4FC0)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_SHOWREALPERSONPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1D1F4570)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1D1F4490)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5150)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5140)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__NOTVERIFY_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D1F52B0)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D1F51F0)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D1F5220)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D1F5230)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_3_OFFSET UNITYSDK_OFFSET(0x1D1F5240)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D1F5190)
#define MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1D1F51C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealPersonManager_TypeDefinitionIndex = 21456;

	class RealPersonManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::RealPersonManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealPersonManager**)Il2CppClass::FromTypeDefinitionIndex(RealPersonManager_TypeDefinitionIndex)->GetStaticField(0x9820);
		}
		::System::Action* OnBack; // 0x10
		::System::Action* OnSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckRealPerson(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_CHECKREALPERSON_OFFSET))(data);
		}

		::System::Void Show(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_SHOW_OFFSET))(this, account);
		}

		::System::Boolean ShowRealPersonPluginUI(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_SHOWREALPERSONPLUGINUI_OFFSET))(this, account);
		}

		::System::Void HideRealPerson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_HIDEREALPERSON_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void MeetRule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_MEETRULE_OFFSET))(this);
		}

		::System::Void NotVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER_NOTVERIFY_OFFSET))(this);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOW_B__4_0_OFFSET))(this);
		}

		::System::Void _Show_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOW_B__4_1_OFFSET))(this);
		}

		::System::Void _ShowRealPersonPluginUI_b__5_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowRealPersonPluginUI_b__5_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowRealPersonPluginUI_b__5_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowRealPersonPluginUI_b__5_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__SHOWREALPERSONPLUGINUI_B__5_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _NotVerify_b__9_0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSONMANAGER__NOTVERIFY_B__9_0_OFFSET))(this, result);
		}
	};
}
