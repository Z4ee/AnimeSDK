#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__12_1_OFFSET UNITYSDK_OFFSET(0x157A87F0)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A86C0)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157A8700)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__INITSUBWIDGETS_B__24_1_OFFSET UNITYSDK_OFFSET(0x157A8850)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__8_0_OFFSET UNITYSDK_OFFSET(0x157A8710)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDeployBangbooPopWindowController___c_TypeDefinitionIndex = 53488;

	class UISuibianTempleDeployBangbooPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleDeployBangbooPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleDeployBangbooPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleDeployBangbooPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x349A0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__12_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleDeployBangbooPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x349A8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleDeployBangbooPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x349B0);
		}
		static ::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleDeployBangbooPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x349B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnUIDestroy_b__8_0(::Class_2_01B22E9930E7BB4D* b)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__8_0_OFFSET))(this, b);
		}

		::System::Void _BindViewCallbacks_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__BINDVIEWCALLBACKS_B__12_1_OFFSET))(this);
		}

		::System::Boolean _InitSubWidgets_b__24_1(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOOPOPWINDOWCONTROLLER___C__INITSUBWIDGETS_B__24_1_OFFSET))(this, uid);
		}
	};
}
