#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1098;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C8E80)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C8EC0)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x167C8ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex = 68817;

	class UIHollowResearchProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1098*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1098*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA80);
		}
		static ::MoleMole::UIHollowResearchProgressWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowResearchProgressWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__18_0(::Class_2_208CC9941471731A_1098* x, ::Class_2_208CC9941471731A_1098* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1098*, ::Class_2_208CC9941471731A_1098*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET))(this, x, y);
		}
	};
}
