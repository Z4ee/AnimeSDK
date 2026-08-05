#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_988;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18831FE0)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18832020)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__SORTCFGS_B__47_0_OFFSET UNITYSDK_OFFSET(0x18832030)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex = 85817;

	class UIHollowCollectRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_988*>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_988*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36CF0);
		}
		static ::MoleMole::UIHollowCollectRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCollectRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCollectRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortCfgs_b__47_0(::Class_2_208CC9941471731A_988* x, ::Class_2_208CC9941471731A_988* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_988*, ::Class_2_208CC9941471731A_988*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__SORTCFGS_B__47_0_OFFSET))(this, x, y);
		}
	};
}
