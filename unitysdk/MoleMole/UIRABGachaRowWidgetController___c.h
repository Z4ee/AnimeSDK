#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A75247D9456F6C2E;
class Class_3_6EF456A21AE85EEC_182;
namespace MoleMole { class UIRABGachaItemRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16669E90)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16669ED0)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__ONPULLSUCCESSSHOWREWARD_B__19_0_OFFSET UNITYSDK_OFFSET(0x16669EE0)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_0_OFFSET UNITYSDK_OFFSET(0x16669F40)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_1_OFFSET UNITYSDK_OFFSET(0x16669FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaRowWidgetController___c_TypeDefinitionIndex = 57127;

	class UIRABGachaRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIRABGachaItemRowWidgetController_Data*>** StaticGet___9__23_1()
		{
			return (::System::Comparison_1<::MoleMole::UIRABGachaItemRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F3E0);
		}
		static ::System::Func_2<::Class_3_6EF456A21AE85EEC_182*, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_3_6EF456A21AE85EEC_182*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F3E8);
		}
		static ::System::Func_2<::Class_2_A75247D9456F6C2E*, ::MoleMole::UIRABGachaItemRowWidgetController_Data*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::Class_2_A75247D9456F6C2E*, ::MoleMole::UIRABGachaItemRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F3F0);
		}
		static ::MoleMole::UIRABGachaRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABGachaRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnPullSuccessShowReward_b__19_0(::Class_3_6EF456A21AE85EEC_182* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_182*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__ONPULLSUCCESSSHOWREWARD_B__19_0_OFFSET))(this, item);
		}

		::MoleMole::UIRABGachaItemRowWidgetController_Data* _ShowPoolData_b__23_0(::Class_2_A75247D9456F6C2E* pool)
		{
			return ((::MoleMole::UIRABGachaItemRowWidgetController_Data*(*)(::PVOID, ::Class_2_A75247D9456F6C2E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_0_OFFSET))(this, pool);
		}

		::System::Int32 _ShowPoolData_b__23_1(::MoleMole::UIRABGachaItemRowWidgetController_Data* x, ::MoleMole::UIRABGachaItemRowWidgetController_Data* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRABGachaItemRowWidgetController_Data*, ::MoleMole::UIRABGachaItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_1_OFFSET))(this, x, y);
		}
	};
}
