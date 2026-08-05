#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_877AA22B04AFB81F_2;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184F7C40)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184F7C80)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__FETCHNOWPHASEALLREWARD_B__42_0_OFFSET UNITYSDK_OFFSET(0x184F7E50)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__ONCLICKPHASEBTN_B__24_0_OFFSET UNITYSDK_OFFSET(0x184F7C90)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__SORTNOWPHASEQUESTLIST_B__40_0_OFFSET UNITYSDK_OFFSET(0x184F7D50)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex = 55975;

	class UINewbieGuideMissionBaseWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AE80);
		}
		static ::MoleMole::UINewbieGuideMissionBaseWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewbieGuideMissionBaseWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AE88);
		}
		static ::System::Comparison_1<::Class_1_877AA22B04AFB81F_2*>** StaticGet___9__40_0()
		{
			return (::System::Comparison_1<::Class_1_877AA22B04AFB81F_2*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AE90);
		}
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPhaseBtn_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__ONCLICKPHASEBTN_B__24_0_OFFSET))(this);
		}

		::System::Int32 _SortNowPhaseQuestList_b__40_0(::Class_1_877AA22B04AFB81F_2* questA, ::Class_1_877AA22B04AFB81F_2* questB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_877AA22B04AFB81F_2*, ::Class_1_877AA22B04AFB81F_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__SORTNOWPHASEQUESTLIST_B__40_0_OFFSET))(this, questA, questB);
		}

		::System::Void _FetchNowPhaseAllReward_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__FETCHNOWPHASEALLREWARD_B__42_0_OFFSET))(this);
		}
	};
}
