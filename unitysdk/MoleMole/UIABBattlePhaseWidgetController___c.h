#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_435;
class Class_2_208CC9941471731A_90;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BD0050)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CREATEACTIVATEEFFECTFORCAMP_B__37_0_OFFSET UNITYSDK_OFFSET(0x15BD0180)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD0090)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__ONCAMPCHANGE_B__36_0_OFFSET UNITYSDK_OFFSET(0x15BD00A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c_TypeDefinitionIndex = 63708;

	class UIABBattlePhaseWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_208CC9941471731A_435*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_208CC9941471731A_435*>**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324B0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_90*, ::System::Int32>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_90*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324B8);
		}
		static ::MoleMole::UIABBattlePhaseWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABBattlePhaseWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x324C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_435* _OnCampChange_b__36_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> pair)
		{
			return ((::Class_2_208CC9941471731A_435*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__ONCAMPCHANGE_B__36_0_OFFSET))(this, pair);
		}

		::System::Int32 _CreateActivateEffectForCamp_b__37_0(::Class_2_208CC9941471731A_90* cfg)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_90*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CREATEACTIVATEEFFECTFORCAMP_B__37_0_OFFSET))(this, cfg);
		}
	};
}
