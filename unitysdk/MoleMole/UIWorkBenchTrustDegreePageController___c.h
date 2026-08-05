#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_5;
class Class_2_CEF0D076577A9E4E;
namespace MoleMole { class UIWorkBenchTrustDegreePageController_PartnerCampTemplateData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET UNITYSDK_OFFSET(0x161112D0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x161114C0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16111280)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161112C0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET UNITYSDK_OFFSET(0x16111390)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET UNITYSDK_OFFSET(0x161113E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex = 58037;

	class UIWorkBenchTrustDegreePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_CEF0D076577A9E4E*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::Class_2_CEF0D076577A9E4E*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x45320);
		}
		static ::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_5*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::Class_2_6D99A03C58ED2B6E_5*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x45328);
		}
		static ::System::Func_2<::Class_2_6D99A03C58ED2B6E_5*, ::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::Class_2_6D99A03C58ED2B6E_5*, ::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x45330);
		}
		static ::MoleMole::UIWorkBenchTrustDegreePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchTrustDegreePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x45338);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x45340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_Button_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET))(this);
		}

		::System::Int32 _InitPartnerCampData_b__16_0(::Class_2_6D99A03C58ED2B6E_5* a, ::Class_2_6D99A03C58ED2B6E_5* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_5*, ::Class_2_6D99A03C58ED2B6E_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET))(this, a, b);
		}

		::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData* _InitPartnerCampData_b__16_1(::Class_2_6D99A03C58ED2B6E_5* template_)
		{
			return ((::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET))(this, template_);
		}

		::System::Int32 _BuildPartnerData_b__20_0(::Class_2_CEF0D076577A9E4E* a, ::Class_2_CEF0D076577A9E4E* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_CEF0D076577A9E4E*, ::Class_2_CEF0D076577A9E4E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET))(this, a, b);
		}
	};
}
