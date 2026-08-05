#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B51557505C9FDEC9;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B23BD30)
#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23BD70)
#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__INITITEMS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B23BD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TalentPageController___c_TypeDefinitionIndex = 78630;

	class UIAbyssS2TalentPageController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_2_B51557505C9FDEC9*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::Class_2_B51557505C9FDEC9*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A100);
		}
		static ::MoleMole::UIAbyssS2TalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitItems_b__17_0(::Class_2_B51557505C9FDEC9* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_B51557505C9FDEC9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__INITITEMS_B__17_0_OFFSET))(this, x);
		}
	};
}
