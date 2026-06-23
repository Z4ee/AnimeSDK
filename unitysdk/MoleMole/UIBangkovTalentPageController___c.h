#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176074B0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176074F0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__OPENBANGKOVITEMINFOFROMCOSTICON_B__21_1_OFFSET UNITYSDK_OFFSET(0x17607500)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPageController___c_TypeDefinitionIndex = 69427;

	class UIBangkovTalentPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangkovTalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovTalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x41360);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__21_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x41368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenBangkovItemInfoFromCostIcon_b__21_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__OPENBANGKOVITEMINFOFROMCOSTICON_B__21_1_OFFSET))(this);
		}
	};
}
