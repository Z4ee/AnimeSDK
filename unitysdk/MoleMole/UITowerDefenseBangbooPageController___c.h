#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_323;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF627280)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF6272C0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0xF6272D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBangbooPageController___c_TypeDefinitionIndex = 54755;

	class UITowerDefenseBangbooPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_323*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_323*>**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF40);
		}
		static ::MoleMole::UITowerDefenseBangbooPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITowerDefenseBangbooPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__8_0(::Class_2_208CC9941471731A_323* a, ::Class_2_208CC9941471731A_323* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_323*, ::Class_2_208CC9941471731A_323*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, a, b);
		}
	};
}
