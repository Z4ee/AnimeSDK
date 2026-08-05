#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D975F0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D97630)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__INITTABGROUP_B__7_0_OFFSET UNITYSDK_OFFSET(0x11D97640)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex = 72511;

	class UIAbyssS2RoleChallengeListWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CD50);
		}
		static ::MoleMole::UIAbyssS2RoleChallengeListWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RoleChallengeListWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabGroup_b__7_0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__INITTABGROUP_B__7_0_OFFSET))(this, index);
		}
	};
}
