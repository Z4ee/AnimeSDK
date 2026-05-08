#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18814BC9826CDED5;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167D8C40)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167D8C80)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__SORTPROPS_B__26_0_OFFSET UNITYSDK_OFFSET(0x167D8C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex = 49120;

	class UIAbyssS2MapRefreshPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2MapRefreshPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2MapRefreshPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex)->GetStaticField(0x3ECB0);
		}
		static ::System::Comparison_1<::Class_1_18814BC9826CDED5*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::Class_1_18814BC9826CDED5*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex)->GetStaticField(0x3ECB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortProps_b__26_0(::Class_1_18814BC9826CDED5* a, ::Class_1_18814BC9826CDED5* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_18814BC9826CDED5*, ::Class_1_18814BC9826CDED5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__SORTPROPS_B__26_0_OFFSET))(this, a, b);
		}
	};
}
