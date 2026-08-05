#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_560;
class Class_2_21B962BB0A8CF0AA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A3180)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199A31C0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET UNITYSDK_OFFSET(0x199A31D0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET UNITYSDK_OFFSET(0x199A3220)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex = 88998;

	class UIABInLevelPlayerInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_21B962BB0A8CF0AA*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_560*, ::Class_2_21B962BB0A8CF0AA*>>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_2_21B962BB0A8CF0AA*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_560*, ::Class_2_21B962BB0A8CF0AA*>>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CD00);
		}
		static ::MoleMole::UIABInLevelPlayerInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABInLevelPlayerInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CD08);
		}
		static ::System::Func_2<::Class_2_21B962BB0A8CF0AA*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_2_21B962BB0A8CF0AA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshBangBoo_b__19_0(::Class_2_21B962BB0A8CF0AA* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_21B962BB0A8CF0AA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET))(this, slot);
		}

		::System::ValueTuple_2<::Class_2_208CC9941471731A_560*, ::Class_2_21B962BB0A8CF0AA*> _RefreshBangBoo_b__19_1(::Class_2_21B962BB0A8CF0AA* slot)
		{
			return ((::System::ValueTuple_2<::Class_2_208CC9941471731A_560*, ::Class_2_21B962BB0A8CF0AA*>(*)(::PVOID, ::Class_2_21B962BB0A8CF0AA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET))(this, slot);
		}
	};
}
