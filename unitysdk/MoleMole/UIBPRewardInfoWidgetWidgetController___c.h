#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB8190)
#define MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB81D0)
#define MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__SCROLLVIEWSLIDETOTARGETONOPEN_B__22_0_OFFSET UNITYSDK_OFFSET(0x15AB81E0)
#define MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__SCROLLVIEWSLIDETOTARGETONOPEN_B__22_1_OFFSET UNITYSDK_OFFSET(0x15AB8200)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPRewardInfoWidgetWidgetController___c_TypeDefinitionIndex = 41452;

	class UIBPRewardInfoWidgetWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBPRewardInfoWidgetWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBPRewardInfoWidgetWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBPRewardInfoWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A920);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBPRewardInfoWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A928);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBPRewardInfoWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ScrollViewSlideToTargetOnOpen_b__22_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__SCROLLVIEWSLIDETOTARGETONOPEN_B__22_0_OFFSET))(this, pair);
		}

		::System::Int32 _ScrollViewSlideToTargetOnOpen_b__22_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPREWARDINFOWIDGETWIDGETCONTROLLER___C__SCROLLVIEWSLIDETOTARGETONOPEN_B__22_1_OFFSET))(this, pair);
		}
	};
}
