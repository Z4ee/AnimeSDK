#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldQRBindingDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA81E20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA81E60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__SHOW_B__40_0_OFFSET UNITYSDK_OFFSET(0x1BA81E70)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldQRBindingDialog___c_TypeDefinitionIndex = 20562;

	class HandheldQRBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*>** StaticGet___9__40_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*>**)Il2CppClass::FromTypeDefinitionIndex(HandheldQRBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0x9130);
		}
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog___c**)Il2CppClass::FromTypeDefinitionIndex(HandheldQRBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0x9138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__40_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__SHOW_B__40_0_OFFSET))(this, dialog);
		}
	};
}
