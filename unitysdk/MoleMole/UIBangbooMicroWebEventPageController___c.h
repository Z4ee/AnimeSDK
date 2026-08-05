#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1150;
class Class_2_208CC9941471731A_686;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1930C010)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1930C050)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1930C0B0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__27_0_OFFSET UNITYSDK_OFFSET(0x1930C060)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex = 72583;

	class UIBangbooMicroWebEventPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1150*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1150*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x45010);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_686*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_686*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x45018);
		}
		static ::MoleMole::UIBangbooMicroWebEventPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooMicroWebEventPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x45020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRightListForCurrentTab_b__27_0(::Class_2_208CC9941471731A_686* a, ::Class_2_208CC9941471731A_686* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_686*, ::Class_2_208CC9941471731A_686*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__27_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__28_0(::Class_2_208CC9941471731A_1150* a, ::Class_2_208CC9941471731A_1150* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1150*, ::Class_2_208CC9941471731A_1150*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__28_0_OFFSET))(this, a, b);
		}
	};
}
