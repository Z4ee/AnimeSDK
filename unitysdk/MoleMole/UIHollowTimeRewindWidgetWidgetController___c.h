#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0761BC6DC5342529.h"
#include "unitysdk/System/Object.h"

class Class_1_D7D6091F64F551A7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199DC2E0)
#define MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CLEARSEGMENTFORSWITCH_B__10_0_OFFSET UNITYSDK_OFFSET(0x199DC330)
#define MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199DC320)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTimeRewindWidgetWidgetController___c_TypeDefinitionIndex = 74525;

	class UIHollowTimeRewindWidgetWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowTimeRewindWidgetWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowTimeRewindWidgetWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTimeRewindWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45110);
		}
		static ::System::Func_2<::Class_1_D7D6091F64F551A7*, ::Enum_3_0761BC6DC5342529>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_1_D7D6091F64F551A7*, ::Enum_3_0761BC6DC5342529>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTimeRewindWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Enum_3_0761BC6DC5342529 _ClearSegmentForSwitch_b__10_0(::Class_1_D7D6091F64F551A7* notify)
		{
			return ((::Enum_3_0761BC6DC5342529(*)(::PVOID, ::Class_1_D7D6091F64F551A7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIMEREWINDWIDGETWIDGETCONTROLLER___C__CLEARSEGMENTFORSWITCH_B__10_0_OFFSET))(this, notify);
		}
	};
}
