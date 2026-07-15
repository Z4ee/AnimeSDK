#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class GooglePCOAuth; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6B8350)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B8390)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__SHOW_B__29_0_OFFSET UNITYSDK_OFFSET(0x1B6B83A0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int GooglePCOAuth___c_TypeDefinitionIndex = 8368;

	class GooglePCOAuth___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth___c_TypeDefinitionIndex)->GetStaticField(0x28550);
		}
		static ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth___c**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth___c_TypeDefinitionIndex)->GetStaticField(0x28558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__29_0(::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__SHOW_B__29_0_OFFSET))(this, a1);
		}
	};
}
