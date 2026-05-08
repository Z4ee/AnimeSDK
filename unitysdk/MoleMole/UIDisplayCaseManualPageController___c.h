#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_17;
class Class_2_208CC9941471731A_480;
class Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158E7940)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158E7980)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET UNITYSDK_OFFSET(0x158E79E0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x158E7990)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET UNITYSDK_OFFSET(0x158E7C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c_TypeDefinitionIndex = 52827;

	class UIDisplayCaseManualPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x37CE0);
		}
		static ::MoleMole::UIDisplayCaseManualPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCaseManualPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x37CE8);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_480*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_480*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x37CF0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_17*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_17*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x37CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__11_0(::Class_2_208CC9941471731A_17* i, ::Class_2_208CC9941471731A_17* j)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_17*, ::Class_2_208CC9941471731A_17*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET))(this, i, j);
		}

		::System::Int32 _OnTabClicked_b__15_0(::Class_2_208CC9941471731A_480* a, ::Class_2_208CC9941471731A_480* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_480*, ::Class_2_208CC9941471731A_480*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET))(this, a, b);
		}

		::System::Boolean _RefreshTabs_b__16_0(::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET))(this, v);
		}
	};
}
