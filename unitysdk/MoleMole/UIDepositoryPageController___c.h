#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16788E00)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16788E40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__INITVIEW_B__67_3_OFFSET UNITYSDK_OFFSET(0x16788E90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__ONUIINIT_B__42_0_OFFSET UNITYSDK_OFFSET(0x16788E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController___c_TypeDefinitionIndex = 77126;

	class UIDepositoryPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Class_1_1685EC66FBD28897*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x326E0);
		}
		static ::System::Action** StaticGet___9__67_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x326E8);
		}
		static ::MoleMole::UIDepositoryPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDepositoryPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x326F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__42_0(::Class_1_1685EC66FBD28897* viewData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__ONUIINIT_B__42_0_OFFSET))(this, viewData);
		}

		::System::Void _InitView_b__67_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__INITVIEW_B__67_3_OFFSET))(this);
		}
	};
}
