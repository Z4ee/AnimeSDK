#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateVerificationDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B32F760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32F7A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B32F7B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateVerificationDialog___c_TypeDefinitionIndex = 20548;

	class HandheldAgeGateVerificationDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog___c**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateVerificationDialog___c_TypeDefinitionIndex)->GetStaticField(0xB410);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*>**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateVerificationDialog___c_TypeDefinitionIndex)->GetStaticField(0xB418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__43_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET))(this, dialog);
		}
	};
}
