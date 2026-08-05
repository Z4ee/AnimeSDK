#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET UNITYSDK_OFFSET(0x1CAF63A0)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1CAF6390)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAF63C0)
#define MIHOYO_SDK_WIN_USERAGREEMENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF63B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserAgreementManager_TypeDefinitionIndex = 21468;

	class UserAgreementManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::UserAgreementManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::UserAgreementManager**)Il2CppClass::FromTypeDefinitionIndex(UserAgreementManager_TypeDefinitionIndex)->GetStaticField(0xB160);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void ShowUserAgreement(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_OFFSET))(this, callback);
		}

		::System::Void ShowUserAgreement_1(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERAGREEMENTMANAGER_SHOWUSERAGREEMENT_1_OFFSET))(this, jsonString, callback);
		}
	};
}
