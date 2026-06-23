#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1040;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155DC210)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155DC250)
#define MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x155DC260)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusPopWindowController___c_TypeDefinitionIndex = 82001;

	class UIMainCityMenusPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityMenusPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityMenusPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30F20);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1040*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1040*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityMenusPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitSundryView_b__14_0(::Class_2_208CC9941471731A_1040* a, ::Class_2_208CC9941471731A_1040* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1040*, ::Class_2_208CC9941471731A_1040*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSPOPWINDOWCONTROLLER___C__INITSUNDRYVIEW_B__14_0_OFFSET))(this, a, b);
		}
	};
}
