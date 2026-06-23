#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_25;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1573B470)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1573B4B0)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DEFAULT_REAGAINDUNGEON_B__120_0_OFFSET UNITYSDK_OFFSET(0x1573B4D0)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__75_0_OFFSET UNITYSDK_OFFSET(0x1573B4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController___c_TypeDefinitionIndex = 65616;

	class UILevelResultV2_PageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILevelResultV2_PageController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelResultV2_PageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_PageController___c_TypeDefinitionIndex)->GetStaticField(0x30E40);
		}
		static ::System::Action** StaticGet___9__75_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_PageController___c_TypeDefinitionIndex)->GetStaticField(0x30E48);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_25*>** StaticGet___9__120_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_25*>**)Il2CppClass::FromTypeDefinitionIndex(UILevelResultV2_PageController___c_TypeDefinitionIndex)->GetStaticField(0x30E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __AddFadeOutAnimationCallback_b__75_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__75_0_OFFSET))(this);
		}

		::System::Void _Default_ReAgainDungeon_b__120_0(::Class_3_48A3D3A34C52331D_25* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DEFAULT_REAGAINDUNGEON_B__120_0_OFFSET))(this, msg);
		}
	};
}
