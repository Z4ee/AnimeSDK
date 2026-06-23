#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1007;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122C3BB0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122C3BF0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x122C3C00)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBangbooPageController___c_TypeDefinitionIndex = 49846;

	class UITowerDefenseBangbooPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITowerDefenseBangbooPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITowerDefenseBangbooPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F5D0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1007*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1007*>**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F5D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__8_0(::Class_2_208CC9941471731A_1007* a, ::Class_2_208CC9941471731A_1007* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1007*, ::Class_2_208CC9941471731A_1007*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, a, b);
		}
	};
}
