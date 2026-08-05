#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1513F070)
#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1513F0B0)
#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__ENTERSPECIALTRAINING_B__4_2_OFFSET UNITYSDK_OFFSET(0x1513F0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingSpecialRowWidgetController___c_TypeDefinitionIndex = 62280;

	class UITrainingSpecialRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITrainingSpecialRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UITrainingSpecialRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UITrainingSpecialRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x473F0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UITrainingSpecialRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x473F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _EnterSpecialTraining_b__4_2(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__ENTERSPECIALTRAINING_B__4_2_OFFSET))(this, _);
		}
	};
}
