#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_329;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E3C100)
#define MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3C140)
#define MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x15E3C150)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntableRewardDialogPopWindowController___c_TypeDefinitionIndex = 86289;

	class UIAbyssS2TurntableRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2TurntableRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TurntableRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntableRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43080);
		}
		static ::System::Comparison_1<::Class_3_6EF456A21AE85EEC_329*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_3_6EF456A21AE85EEC_329*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntableRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__6_0(::Class_3_6EF456A21AE85EEC_329* a, ::Class_3_6EF456A21AE85EEC_329* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_329*, ::Class_3_6EF456A21AE85EEC_329*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEREWARDDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, a, b);
		}
	};
}
