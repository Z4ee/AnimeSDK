#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_716;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167CB210)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167CB250)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x167CB260)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex = 43696;

	class UIHollowTeamPreviewWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowTeamPreviewWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowTeamPreviewWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F220);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_716*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_716*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchCfgs_b__11_0(::Class_2_208CC9941471731A_716* x, ::Class_2_208CC9941471731A_716* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_716*, ::Class_2_208CC9941471731A_716*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET))(this, x, y);
		}
	};
}
