#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_320;
class Class_2_208CC9941471731A_882;
class Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1959A8C0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1959A900)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET UNITYSDK_OFFSET(0x1959A960)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1959A910)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1959ABB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c_TypeDefinitionIndex = 46686;

	class UIDisplayCaseManualPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_882*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_882*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF70);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_320*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_320*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF78);
		}
		static ::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF80);
		}
		static ::MoleMole::UIDisplayCaseManualPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDisplayCaseManualPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseManualPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__11_0(::Class_2_208CC9941471731A_320* i, ::Class_2_208CC9941471731A_320* j)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_320*, ::Class_2_208CC9941471731A_320*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONUIINIT_B__11_0_OFFSET))(this, i, j);
		}

		::System::Int32 _OnTabClicked_b__15_0(::Class_2_208CC9941471731A_882* a, ::Class_2_208CC9941471731A_882* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_882*, ::Class_2_208CC9941471731A_882*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__ONTABCLICKED_B__15_0_OFFSET))(this, a, b);
		}

		::System::Boolean _RefreshTabs_b__16_0(::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0D31A1661D004892<::Class_2_4E304963EFC1C1E1_Class_2_18F706B5EBB56A51*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__REFRESHTABS_B__16_0_OFFSET))(this, v);
		}
	};
}
