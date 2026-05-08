#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155E9AC0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155E9B00)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET UNITYSDK_OFFSET(0x155E9B10)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x155E9BC0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET UNITYSDK_OFFSET(0x155E9C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex = 50651;

	class UIInLevelPauseSkillRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EF90);
		}
		static ::MoleMole::UIInLevelPauseSkillRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseSkillRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EF98);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EFA0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshDesc_b__10_0(::Class_2_208CC9941471731A_296* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _RefreshInfo_b__11_0(::Class_2_208CC9941471731A_296* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshInfo_b__11_1(::Class_2_208CC9941471731A_296* a, ::Class_2_208CC9941471731A_296* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET))(this, a, b);
		}
	};
}
