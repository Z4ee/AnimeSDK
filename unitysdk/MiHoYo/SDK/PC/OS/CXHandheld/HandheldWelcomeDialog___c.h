#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD02920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD02960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1CD02970)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldWelcomeDialog___c_TypeDefinitionIndex = 20917;

	class HandheldWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog___c**)Il2CppClass::FromTypeDefinitionIndex(HandheldWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xA200);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(HandheldWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xA208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET))(this, dialog);
		}
	};
}
