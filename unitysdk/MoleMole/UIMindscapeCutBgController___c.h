#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeLevelRowWidgetController; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1866C160)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1866C1A0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__INITVIEW_B__29_0_OFFSET UNITYSDK_OFFSET(0x1866C1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController___c_TypeDefinitionIndex = 59871;

	class UIMindscapeCutBgController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIMindscapeLevelRowWidgetController*>** StaticGet___9__29_0()
		{
			return (::System::Comparison_1<::MoleMole::UIMindscapeLevelRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeCutBgController___c_TypeDefinitionIndex)->GetStaticField(0x472B0);
		}
		static ::MoleMole::UIMindscapeCutBgController___c** StaticGet___9()
		{
			return (::MoleMole::UIMindscapeCutBgController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeCutBgController___c_TypeDefinitionIndex)->GetStaticField(0x472B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitView_b__29_0(::MoleMole::UIMindscapeLevelRowWidgetController* a, ::MoleMole::UIMindscapeLevelRowWidgetController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMindscapeLevelRowWidgetController*, ::MoleMole::UIMindscapeLevelRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___C__INITVIEW_B__29_0_OFFSET))(this, a, b);
		}
	};
}
