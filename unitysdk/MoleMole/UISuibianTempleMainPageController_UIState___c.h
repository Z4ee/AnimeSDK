#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1088F560)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1088F5A0)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__ONCREATEPROPERTY_B__1_0_OFFSET UNITYSDK_OFFSET(0x1088F5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController_UIState___c_TypeDefinitionIndex = 49058;

	class UISuibianTempleMainPageController_UIState___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController_UIState___c_TypeDefinitionIndex)->GetStaticField(0x37EB0);
		}
		static ::MoleMole::UISuibianTempleMainPageController_UIState___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleMainPageController_UIState___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleMainPageController_UIState___c_TypeDefinitionIndex)->GetStaticField(0x37EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__1_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE___C__ONCREATEPROPERTY_B__1_0_OFFSET))(this);
		}
	};
}
