#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaBtnWidgetContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A2C50)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157A2C90)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__INITVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x157A2CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBtnWidgetController___c_TypeDefinitionIndex = 62509;

	class UIGachaBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGachaBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGachaBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGachaBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AA80);
		}
		static ::System::Func_2<::MoleMole::UIGachaBtnWidgetContext*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::MoleMole::UIGachaBtnWidgetContext*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGachaBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitView_b__9_0(::MoleMole::UIGachaBtnWidgetContext* c)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGachaBtnWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___C__INITVIEW_B__9_0_OFFSET))(this, c);
		}
	};
}
