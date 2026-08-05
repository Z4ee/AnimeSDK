#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_B97D2A325ABD0307;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18540050)
#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18540090)
#define MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__REFRESHPROGRESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x185400A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex = 84537;

	class UICampIdleRewardDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49020);
		}
		static ::MoleMole::UICampIdleRewardDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICampIdleRewardDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICampIdleRewardDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgress_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_1_B97D2A325ABD0307*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDDIALOGPOPWINDOWCONTROLLER___C__REFRESHPROGRESS_B__16_0_OFFSET))(this, x);
		}
	};
}
