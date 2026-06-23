#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1731F990)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1731F9D0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__OPENTEAMPAGE_B__41_4_OFFSET UNITYSDK_OFFSET(0x1731F9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLFightingWidgetController___c_TypeDefinitionIndex = 44913;

	class UIActivityBattleYCLFightingWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityBattleYCLFightingWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityBattleYCLFightingWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLFightingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30980);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__41_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBattleYCLFightingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OpenTeamPage_b__41_4(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__OPENTEAMPAGE_B__41_4_OFFSET))(this, i);
		}
	};
}
