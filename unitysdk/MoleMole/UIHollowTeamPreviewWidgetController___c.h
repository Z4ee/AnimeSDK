#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_669;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836D090)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1836D0D0)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1836D0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex = 40658;

	class UIHollowTeamPreviewWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowTeamPreviewWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowTeamPreviewWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FE50);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_669*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_669*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchCfgs_b__11_0(::Class_2_208CC9941471731A_669* x, ::Class_2_208CC9941471731A_669* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_669*, ::Class_2_208CC9941471731A_669*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET))(this, x, y);
		}
	};
}
