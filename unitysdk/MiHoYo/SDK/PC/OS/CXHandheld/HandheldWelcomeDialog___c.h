#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A24DE10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24DE50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A24DE60)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldWelcomeDialog___c_TypeDefinitionIndex = 8764;

	class HandheldWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(HandheldWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0x19E60);
		}
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog___c**)Il2CppClass::FromTypeDefinitionIndex(HandheldWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0x19E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET))(this, a1);
		}
	};
}
