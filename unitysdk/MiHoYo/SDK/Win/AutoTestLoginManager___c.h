#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176AEA70)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176AEAB0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__LOGOUT_B__11_0_OFFSET UNITYSDK_OFFSET(0x176AEAC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager___c_TypeDefinitionIndex = 8027;

	class AutoTestLoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(AutoTestLoginManager___c_TypeDefinitionIndex)->GetStaticField(0x26FB0);
		}
		static ::MiHoYo::SDK::Win::AutoTestLoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::AutoTestLoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(AutoTestLoginManager___c_TypeDefinitionIndex)->GetStaticField(0x26FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__11_0(::MiHoYo::SDK::NetworkResponseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__LOGOUT_B__11_0_OFFSET))(this, model);
		}
	};
}
