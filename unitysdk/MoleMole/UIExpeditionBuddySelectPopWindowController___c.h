#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
class Class_2_01B22E9930E7BB4D_Class_2_55729FAD09B8BD3A;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F89D90)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F89DD0)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__GETAUTOTSELECTTARGET_B__43_0_OFFSET UNITYSDK_OFFSET(0x17F89EC0)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONCLICKBUDDY_B__56_0_OFFSET UNITYSDK_OFFSET(0x17F8A070)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__27_0_OFFSET UNITYSDK_OFFSET(0x17F89DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex = 53407;

	class UIExpeditionBuddySelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIExpeditionBuddySelectPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIExpeditionBuddySelectPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30BD0);
		}
		static ::System::Func_2<::Class_2_01B22E9930E7BB4D_Class_2_55729FAD09B8BD3A*, ::System::Int32>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::Class_2_01B22E9930E7BB4D_Class_2_55729FAD09B8BD3A*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30BD8);
		}
		static ::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30BE0);
		}
		static ::System::Comparison_1<::Class_2_01B22E9930E7BB4D*>** StaticGet___9__43_0()
		{
			return (::System::Comparison_1<::Class_2_01B22E9930E7BB4D*>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnUIDestroy_b__27_0(::Class_2_01B22E9930E7BB4D* b)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__27_0_OFFSET))(this, b);
		}

		::System::Int32 _GetAutotSelectTarget_b__43_0(::Class_2_01B22E9930E7BB4D* a, ::Class_2_01B22E9930E7BB4D* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__GETAUTOTSELECTTARGET_B__43_0_OFFSET))(this, a, b);
		}

		::System::Int32 _OnClickBuddy_b__56_0(::Class_2_01B22E9930E7BB4D_Class_2_55729FAD09B8BD3A* c)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D_Class_2_55729FAD09B8BD3A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONCLICKBUDDY_B__56_0_OFFSET))(this, c);
		}
	};
}
