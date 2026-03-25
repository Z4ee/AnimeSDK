#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_GEETESTVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EE0360)
#define MIHOYO_SDK_GEETESTVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE03A0)
#define MIHOYO_SDK_GEETESTVIEW___C__SHOW_B__14_0_OFFSET UNITYSDK_OFFSET(0x15EE03B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView___c_TypeDefinitionIndex = 7248;

	class GeetestView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::GeetestView*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::GeetestView*>**)Il2CppClass::FromTypeDefinitionIndex(GeetestView___c_TypeDefinitionIndex)->GetStaticField(0x13630);
		}
		static ::MiHoYo::SDK::GeetestView___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::GeetestView___c**)Il2CppClass::FromTypeDefinitionIndex(GeetestView___c_TypeDefinitionIndex)->GetStaticField(0x13638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__14_0(::MiHoYo::SDK::GeetestView* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW___C__SHOW_B__14_0_OFFSET))(this, dialog);
		}
	};
}
