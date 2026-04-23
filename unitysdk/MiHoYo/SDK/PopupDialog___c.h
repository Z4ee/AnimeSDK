#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_POPUPDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1761BD30)
#define MIHOYO_SDK_POPUPDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1761BD70)
#define MIHOYO_SDK_POPUPDIALOG___C__SHOW_B__25_1_OFFSET UNITYSDK_OFFSET(0x1761BD80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog___c_TypeDefinitionIndex = 7052;

	class PopupDialog___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__25_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog___c_TypeDefinitionIndex)->GetStaticField(0x217F0);
		}
		static ::MiHoYo::SDK::PopupDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PopupDialog___c**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog___c_TypeDefinitionIndex)->GetStaticField(0x217F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__SHOW_B__25_1_OFFSET))(this);
		}
	};
}
