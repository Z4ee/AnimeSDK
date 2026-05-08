#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x194D5C60)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x194D5870)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x194D5DF0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x194D5DE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccountManager_TypeDefinitionIndex = 19864;

	class ReactivateAccountManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccountManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccountManager**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccountManager_TypeDefinitionIndex)->GetStaticField(0x9BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Show(::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* closeAction, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* submitAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_SHOW_OFFSET))(this, closeAction, submitAction);
		}

		::System::Void HIde()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER_HIDE_OFFSET))(this);
		}
	};
}
