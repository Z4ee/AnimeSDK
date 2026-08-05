#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D67D0)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192D6810)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__OPENTEAMPAGE_B__11_4_OFFSET UNITYSDK_OFFSET(0x192D6820)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCombatPausePrepareWidgetController___c_TypeDefinitionIndex = 85362;

	class UIActivityCombatPausePrepareWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCombatPausePrepareWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCombatPausePrepareWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCombatPausePrepareWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AA50);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__11_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCombatPausePrepareWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AA58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OpenTeamPage_b__11_4(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSEPREPAREWIDGETCONTROLLER___C__OPENTEAMPAGE_B__11_4_OFFSET))(this, i);
		}
	};
}
