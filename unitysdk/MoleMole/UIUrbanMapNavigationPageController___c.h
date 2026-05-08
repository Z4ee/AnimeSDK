#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC89A8F7C61A475D;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C3E730)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3E770)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__GETCHILDAREALIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x14C3E780)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c_TypeDefinitionIndex = 81596;

	class UIUrbanMapNavigationPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_CC89A8F7C61A475D*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::Class_1_CC89A8F7C61A475D*>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x32BA0);
		}
		static ::MoleMole::UIUrbanMapNavigationPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIUrbanMapNavigationPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x32BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetChildAreaList_b__25_0(::Class_1_CC89A8F7C61A475D* l, ::Class_1_CC89A8F7C61A475D* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_CC89A8F7C61A475D*, ::Class_1_CC89A8F7C61A475D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__GETCHILDAREALIST_B__25_0_OFFSET))(this, l, r);
		}
	};
}
