#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_503;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A3F0C0)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3F100)
#define MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x15A3F110)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex = 77449;

	class UIHollowResearchProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_503*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_503*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43990);
		}
		static ::MoleMole::UIHollowResearchProgressWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowResearchProgressWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowResearchProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__18_0(::Class_2_208CC9941471731A_503* x, ::Class_2_208CC9941471731A_503* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_503*, ::Class_2_208CC9941471731A_503*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESEARCHPROGRESSWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__18_0_OFFSET))(this, x, y);
		}
	};
}
