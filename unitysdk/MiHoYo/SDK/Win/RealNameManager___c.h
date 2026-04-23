#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174BAA80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174BAAC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET UNITYSDK_OFFSET(0x174BAB40)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET UNITYSDK_OFFSET(0x174BAAD0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c_TypeDefinitionIndex = 8112;

	class RealNameManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__35_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x330C0);
		}
		static ::MiHoYo::SDK::Win::RealNameManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::RealNameManager___c**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x330C8);
		}
		static ::System::Action** StaticGet___9__38_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x330D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__35_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__38_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET))(this);
		}
	};
}
