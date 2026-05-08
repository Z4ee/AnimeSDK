#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1529CE10)
#define MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1529CE50)
#define MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__ONPOPSHOWED_B__2_1_OFFSET UNITYSDK_OFFSET(0x1529CE60)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_AcatarDemoTrial_PageController___c_TypeDefinitionIndex = 80962;

	class UILevelResultV2_AcatarDemoTrial_PageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_AcatarDemoTrial_PageController___c_TypeDefinitionIndex)->GetStaticField(0x42090);
		}
		static ::MoleMole::UILevelResultV2_AcatarDemoTrial_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_AcatarDemoTrial_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_AcatarDemoTrial_PageController___c_TypeDefinitionIndex)->GetStaticField(0x42098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_ACATARDEMOTRIAL_PAGECONTROLLER___C__ONPOPSHOWED_B__2_1_OFFSET))(this);
		}
	};
}
