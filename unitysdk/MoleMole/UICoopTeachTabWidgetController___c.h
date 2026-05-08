#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16484840)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16484880)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x16484890)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController___c_TypeDefinitionIndex = 41003;

	class UICoopTeachTabWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Image*>** StaticGet___9__10_0()
		{
			return (::System::Converter_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37CD0);
		}
		static ::MoleMole::UICoopTeachTabWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UICoopTeachTabWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* _RefreshView_b__10_0(::Class_2_1A39E1B51756BF41* x)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, x);
		}
	};
}
