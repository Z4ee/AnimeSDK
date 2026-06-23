#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/MoleMole/UIStrategyGuidePageController_ESortScoreLevel.h"
#include "unitysdk/System/Object.h"

class Class_1_A6C17C8DDACC49CF;
class Class_2_1824EF69C8E376A3;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16698500)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CREATESORTER_B__35_0_OFFSET UNITYSDK_OFFSET(0x16698550)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16698540)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_0_OFFSET UNITYSDK_OFFSET(0x16698630)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_1_OFFSET UNITYSDK_OFFSET(0x16698640)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_2_OFFSET UNITYSDK_OFFSET(0x16698650)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONSKILLBTNCLICK_B__86_0_OFFSET UNITYSDK_OFFSET(0x16698620)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDRANDPROPERTYSTR_B__78_0_OFFSET UNITYSDK_OFFSET(0x166985C0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDTEAMPANEL_B__63_0_OFFSET UNITYSDK_OFFSET(0x16698560)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c_TypeDefinitionIndex = 69292;

	class UIStrategyGuidePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIStrategyGuidePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIStrategyGuidePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F530);
		}
		static ::System::Func_2<::Class_1_A6C17C8DDACC49CF*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::Class_1_A6C17C8DDACC49CF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F538);
		}
		static ::System::Action** StaticGet___9__86_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F540);
		}
		static ::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F548);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F550);
		}
		static ::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::Enum_3_CAE10C54ABAE6FAF>** StaticGet___9__89_1()
		{
			return (::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::Enum_3_CAE10C54ABAE6FAF>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F558);
		}
		static ::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::System::Single>** StaticGet___9__89_2()
		{
			return (::System::Func_2<::MoleMole::UIStrategyGuidePageController_ESortScoreLevel, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F560);
		}
		static ::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateSorter_b__35_0(::Class_2_1824EF69C8E376A3* _)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CREATESORTER_B__35_0_OFFSET))(this, _);
		}

		::System::Boolean _RefreshRecommendTeamPanel_b__63_0(::Class_1_A6C17C8DDACC49CF* ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A6C17C8DDACC49CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDTEAMPANEL_B__63_0_OFFSET))(this, ctx);
		}

		::System::String* _RefreshRecommendRandPropertyStr_b__78_0(::System::Int32 pid)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDRANDPROPERTYSTR_B__78_0_OFFSET))(this, pid);
		}

		::System::Void _OnSkillBtnClick_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONSKILLBTNCLICK_B__86_0_OFFSET))(this);
		}

		::System::Boolean _OnEvaluateBtnClick_b__89_0(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_0_OFFSET))(this, item);
		}

		::Enum_3_CAE10C54ABAE6FAF _OnEvaluateBtnClick_b__89_1(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::Enum_3_CAE10C54ABAE6FAF(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_1_OFFSET))(this, item);
		}

		::System::Single _OnEvaluateBtnClick_b__89_2(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONEVALUATEBTNCLICK_B__89_2_OFFSET))(this, item);
		}
	};
}
