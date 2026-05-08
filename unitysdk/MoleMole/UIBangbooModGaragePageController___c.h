#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F53B00)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F53B40)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x12F53B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooModGaragePageController___c_TypeDefinitionIndex = 63152;

	class UIBangbooModGaragePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooModGaragePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooModGaragePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooModGaragePageController___c_TypeDefinitionIndex)->GetStaticField(0x37C40);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooModGaragePageController___c_TypeDefinitionIndex)->GetStaticField(0x37C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}
	};
}
