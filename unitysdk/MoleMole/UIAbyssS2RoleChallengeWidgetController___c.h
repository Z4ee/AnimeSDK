#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_6;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152C9090)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152C90D0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET UNITYSDK_OFFSET(0x152C91A0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x152C90E0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x152C91B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex = 69440;

	class UIAbyssS2RoleChallengeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E9A0);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E9A8);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_6*>** StaticGet___9__23_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_6*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E9B0);
		}
		static ::MoleMole::UIAbyssS2RoleChallengeWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RoleChallengeWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E9B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClick_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET))(this);
		}

		::System::Void _OnBeginBattle_b__23_0(::Class_3_48A3D3A34C52331D_6* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET))(this, beginHollowData);
		}

		::System::Boolean __ctor_b__52_0(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET))(this, i);
		}
	};
}
