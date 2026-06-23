#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_502;
class Class_2_208CC9941471731A_930;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B478F0)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B47930)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__28_0_OFFSET UNITYSDK_OFFSET(0x15B47990)
#define MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__27_0_OFFSET UNITYSDK_OFFSET(0x15B47940)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex = 72537;

	class UIBangbooMicroWebEventPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangbooMicroWebEventPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangbooMicroWebEventPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x49F00);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_502*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_502*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x49F08);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_930*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_930*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebEventPageController___c_TypeDefinitionIndex)->GetStaticField(0x49F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRightListForCurrentTab_b__27_0(::Class_2_208CC9941471731A_930* a, ::Class_2_208CC9941471731A_930* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_930*, ::Class_2_208CC9941471731A_930*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHRIGHTLISTFORCURRENTTAB_B__27_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshRewardPoints_b__28_0(::Class_2_208CC9941471731A_502* a, ::Class_2_208CC9941471731A_502* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_502*, ::Class_2_208CC9941471731A_502*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTPAGECONTROLLER___C__REFRESHREWARDPOINTS_B__28_0_OFFSET))(this, a, b);
		}
	};
}
