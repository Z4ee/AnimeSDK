#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B18320)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18360)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__TRYOVERRIDEALLGAMEPADSPACETARGETS_B__35_2_OFFSET UNITYSDK_OFFSET(0x15B18370)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController___c_TypeDefinitionIndex = 84328;

	class UIZenkovTalentPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIZenkovTalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovTalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x453E0);
		}
		static ::System::Comparison_1<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>** StaticGet___9__35_2()
		{
			return (::System::Comparison_1<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x453E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _TryOverrideAllGamepadSpaceTargets_b__35_2(::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* a, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*, ::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__TRYOVERRIDEALLGAMEPADSPACETARGETS_B__35_2_OFFSET))(this, a, b);
		}
	};
}
