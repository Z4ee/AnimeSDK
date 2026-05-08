#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13414410)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13414450)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__9_0_OFFSET UNITYSDK_OFFSET(0x13414460)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex = 68990;

	class UITutorialVideoPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITutorialVideoPanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UITutorialVideoPanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F2A0);
		}
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UITutorialVideoPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2F2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoInner_b__9_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___C__PLAYVIDEOINNER_B__9_0_OFFSET))(this, vp);
		}
	};
}
