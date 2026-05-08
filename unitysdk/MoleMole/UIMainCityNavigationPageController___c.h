#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1500D9D0)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1500DA10)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__GETQUESTPARTNERID_B__42_0_OFFSET UNITYSDK_OFFSET(0x1500DA30)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__ONMAINBTNCLICKED_B__44_0_OFFSET UNITYSDK_OFFSET(0x1500DA40)
#define MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__SELECTAREA_B__34_2_OFFSET UNITYSDK_OFFSET(0x1500DA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationPageController___c_TypeDefinitionIndex = 72490;

	class UIMainCityNavigationPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F010);
		}
		static ::MoleMole::UIMainCityNavigationPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityNavigationPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F018);
		}
		static ::System::Action** StaticGet___9__34_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F020);
		}
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SelectArea_b__34_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__SELECTAREA_B__34_2_OFFSET))(this);
		}

		::System::Int32 _GetQuestPartnerID_b__42_0(::System::UInt32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__GETQUESTPARTNERID_B__42_0_OFFSET))(this, x);
		}

		::System::Void _OnMainBtnClicked_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONPAGECONTROLLER___C__ONMAINBTNCLICKED_B__44_0_OFFSET))(this);
		}
	};
}
