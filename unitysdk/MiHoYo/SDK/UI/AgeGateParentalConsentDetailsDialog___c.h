#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDetailsDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184381F0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18438230)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x18438240)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDetailsDialog___c_TypeDefinitionIndex = 8305;

	class AgeGateParentalConsentDetailsDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDetailsDialog___c_TypeDefinitionIndex)->GetStaticField(0x235E0);
		}
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDetailsDialog___c_TypeDefinitionIndex)->GetStaticField(0x235E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG___C__SHOW_B__26_0_OFFSET))(this, a1);
		}
	};
}
