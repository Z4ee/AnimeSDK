#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_167;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EDA620)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDA660)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__REFRESHENTRY_B__2_0_OFFSET UNITYSDK_OFFSET(0x16EDA670)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex = 67067;

	class UIBangbooUAVDayTabWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooUAVDayTabWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooUAVDayTabWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x378E0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_167*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_167*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooUAVDayTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x378E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshEntry_b__2_0(::Class_2_208CC9941471731A_167* a)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_167*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___C__REFRESHENTRY_B__2_0_OFFSET))(this, a);
		}
	};
}
