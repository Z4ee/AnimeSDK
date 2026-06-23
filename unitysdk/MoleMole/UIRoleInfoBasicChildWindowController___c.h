#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/MoleMole/UIRoleInfoBasicChildWindowController_ESortScoreLevel.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B82F80)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B82FC0)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_0_OFFSET UNITYSDK_OFFSET(0x17B82FD0)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_1_OFFSET UNITYSDK_OFFSET(0x17B82FE0)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_2_OFFSET UNITYSDK_OFFSET(0x17B82FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex = 43411;

	class UIRoleInfoBasicChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::System::Single>** StaticGet___9__51_2()
		{
			return (::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489C0);
		}
		static ::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489C8);
		}
		static ::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::Enum_3_CAE10C54ABAE6FAF>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel, ::Enum_3_CAE10C54ABAE6FAF>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489D0);
		}
		static ::MoleMole::UIRoleInfoBasicChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoBasicChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x489D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitAvatarScoreDialog_b__51_0(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_0_OFFSET))(this, item);
		}

		::Enum_3_CAE10C54ABAE6FAF _InitAvatarScoreDialog_b__51_1(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::Enum_3_CAE10C54ABAE6FAF(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_1_OFFSET))(this, item);
		}

		::System::Single _InitAvatarScoreDialog_b__51_2(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_2_OFFSET))(this, item);
		}
	};
}
