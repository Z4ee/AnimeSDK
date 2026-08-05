#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF3BC00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3BC40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_0_OFFSET UNITYSDK_OFFSET(0x1CF3BC50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_1_OFFSET UNITYSDK_OFFSET(0x1CF3BEC0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase___c_TypeDefinitionIndex = 20829;

	class BindManagerBase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase___c_TypeDefinitionIndex)->GetStaticField(0x9110);
		}
		static ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerBase___c**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase___c_TypeDefinitionIndex)->GetStaticField(0x9118);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BindManagerBase___c_TypeDefinitionIndex)->GetStaticField(0x9120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_0_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_1_OFFSET))(this);
		}
	};
}
