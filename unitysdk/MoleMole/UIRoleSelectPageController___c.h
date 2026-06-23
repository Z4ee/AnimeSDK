#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__86_5_OFFSET UNITYSDK_OFFSET(0x1228B030)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1228AFE0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1228B020)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c_TypeDefinitionIndex = 76902;

	class UIRoleSelectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__86_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x37E60);
		}
		static ::MoleMole::UIRoleSelectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleSelectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x37E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindBtns_b__86_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__86_5_OFFSET))(this);
		}
	};
}
