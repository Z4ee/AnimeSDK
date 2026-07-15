#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6A3830)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A3870)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__SHOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x1B6A3880)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDialog___c_TypeDefinitionIndex = 8319;

	class AgeGateParentalConsentDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDialog___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDialog___c_TypeDefinitionIndex)->GetStaticField(0x27FB0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>** StaticGet___9__45_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDialog___c_TypeDefinitionIndex)->GetStaticField(0x27FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__45_0(::MiHoYo::SDK::UI::AgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG___C__SHOW_B__45_0_OFFSET))(this, a1);
		}
	};
}
