#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_25;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15772FE0)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15773020)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__ONUIOPEN_B__1_2_OFFSET UNITYSDK_OFFSET(0x15773030)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex = 55289;

	class UIMusicBattleResultPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMusicBattleResultPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMusicBattleResultPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46CE0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_25*>** StaticGet___9__1_2()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_25*>**)Il2CppClass::FromTypeDefinitionIndex(UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46CE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1_2(::Class_3_48A3D3A34C52331D_25* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__ONUIOPEN_B__1_2_OFFSET))(this, rsp);
		}
	};
}
