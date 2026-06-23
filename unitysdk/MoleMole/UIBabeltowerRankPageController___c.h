#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B2293F2A1950D858.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E59960)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E599A0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET UNITYSDK_OFFSET(0x15E599B0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET UNITYSDK_OFFSET(0x15E59AC0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__REFRESHAVATARLIST_B__19_0_OFFSET UNITYSDK_OFFSET(0x15E59CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRankPageController___c_TypeDefinitionIndex = 53423;

	class UIBabeltowerRankPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBabeltowerRankPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerRankPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x49EE0);
		}
		static ::System::Action** StaticGet___9__10_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x49EE8);
		}
		static ::System::Action** StaticGet___9__10_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x49EF0);
		}
		static ::System::Comparison_1<::Struct_2_B2293F2A1950D858>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::Struct_2_B2293F2A1950D858>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x49EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET))(this);
		}

		::System::Int32 _RefreshAvatarList_b__19_0(::Struct_2_B2293F2A1950D858 a, ::Struct_2_B2293F2A1950D858 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_B2293F2A1950D858, ::Struct_2_B2293F2A1950D858))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__REFRESHAVATARLIST_B__19_0_OFFSET))(this, a, b);
		}
	};
}
