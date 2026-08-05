#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1985C1D0)
#define MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1985C210)
#define MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__ONPOPSHOWED_B__8_0_OFFSET UNITYSDK_OFFSET(0x1985C220)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_Hadal_PageController___c_TypeDefinitionIndex = 86832;

	class UILevelResultV2_Hadal_PageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_Hadal_PageController___c_TypeDefinitionIndex)->GetStaticField(0x3A590);
		}
		static ::MoleMole::UILevelResultV2_Hadal_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_Hadal_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_Hadal_PageController___c_TypeDefinitionIndex)->GetStaticField(0x3A598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_HADAL_PAGECONTROLLER___C__ONPOPSHOWED_B__8_0_OFFSET))(this);
		}
	};
}
