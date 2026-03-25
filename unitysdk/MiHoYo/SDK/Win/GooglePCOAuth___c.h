#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GooglePCOAuth; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160A8280)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160A82C0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__SHOW_B__27_0_OFFSET UNITYSDK_OFFSET(0x160A82D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCOAuth___c_TypeDefinitionIndex = 8091;

	class GooglePCOAuth___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCOAuth___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GooglePCOAuth___c**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth___c_TypeDefinitionIndex)->GetStaticField(0x13ED0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth___c_TypeDefinitionIndex)->GetStaticField(0x13ED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__27_0(::MiHoYo::SDK::Win::GooglePCOAuth* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__SHOW_B__27_0_OFFSET))(this, dialog);
		}
	};
}
